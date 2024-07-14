import sensor, image, time
from pyb import LED,UART
LED(1).on()
LED(2).on()
LED(3).on()
sensor.reset()
sensor.set_pixformat(sensor.GRAYSCALE)
sensor.set_framesize(sensor.QVGA)
sensor.skip_frames(time = 2000)
clock = time.clock()
left_flag = 0
right_flag = 0
flag = 0
uart = UART(1,9600)
while(True):
    clock.tick()
    img = sensor.snapshot().lens_corr(1.5)
    line = img.get_regression([(0, 79)], robust = True,roi=(0,70,70,100),pixel_threshold=300)
    line2 = img.get_regression([(0, 79)], robust = True,roi=(190,50,320,120),pixel_threshold=300)
    img.draw_rectangle((0,70,70,100),thickness = 2, fill = False)
    img.draw_rectangle((190,50,320,120),thickness = 2, fill = False)
    if (line) or (line2):
        img.draw_line(line.line(), color=127) if line else None
        img.draw_line(line2.line(), color=127) if line2 else None
#        if line:
#            line.theta()
#        print(,line2.theta())
        if (line) and (line2):
            print(line.theta(),line2.theta())
#            if  30 <line.theta() < 90  and 30 < line2.theta() <90:
#                flag = 1
#                print("右转")
#                uart.write('3')
#            elif line.theta() > 90 and line2.theta() > 90:
#                flag = 2
#                print("left:%d,right:%d",line.theta(),line2.theta())
#                print("左转")
#                uart.write('2')
#            else:
#                flag = 0
            print("直走")
            uart.write('1')
        elif (line) and not (line2):
            print("left",line.theta())
#           flag = 3
            print("右转")
            uart.write('1')
        elif not (line) and (line2):
            if 140 < line2.theta() < 160:
                print ("边走边左转")
                uart.write('4')
            else:
                print("right",line2.theta())
#               flag = 2
                print("左转")
                uart.write('2')
    else:
        print("右转")
        uart.write('1')
#        pass
