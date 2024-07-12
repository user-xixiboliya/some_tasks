#include "dance.h"
#include "led.h"
#include "delay.h"
#include "sys.h"
#include "exit.h" 
#include "uart.h"
#include "LobotSerialServo.h"
#include "bool.h"

#define ID1 1
#define ID2 2
#define ID3 3
#define ID4 4
#define ID5 5
#define ID6 6
#define ID7 7
#define ID8 8
#define ID9 9
#define ID10 10

//3    7
//4    8
//5    1
//6    2


//zoulu3
#define zltai 60
//第二步6  389-450
//第六步2  389-450

#define zltime 300
#define zltiming 305
#define zlyi 350
#define zler 100
#define zlsan 0
#define zlsi 0
#define zlwu 350
#define zlliu 100
#define zlqi 0
#define zlba 0

#define zlwanyao 0
//8 5 -50
//4 1 -80

//zhuanwan
#define zwtime 450
#define zwtiming 455

#define zhuanwan1 520

//zhuanwan2
#define wanyao 10  //弯腰ID4+wanyao  ID8-wanyao
#define zwyi 300 //1
#define zwsi 0  //4
#define zwwu 600  //5 
#define zwliu 200  //6
#define zwsan 150  //3

#define zwtai 0


//zoulu4
#define zltai4 60

#define zltime4 100
#define zltiming4 105
#define zlyi4 150
#define zler4 0
#define zlsan4 0
#define zlsi4 0
#define zlwu4 150
#define zlliu4 0
#define zlqi4 0
#define zlba4 0

#define zlwanyao4 0

//zoulu5  zuozhuan3
#define zlwanyao5 -20
#define zltai5 60

#define zlwanyao6 0
#define zw2 525


void guizhong(void)
{
// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 800);
LobotSerialServoMove(2, 500, 800);
LobotSerialServoMove(3, 500, 800);
LobotSerialServoMove(4, 500, 800);
LobotSerialServoMove(5, 500, 800);
LobotSerialServoMove(6, 500, 800);
LobotSerialServoMove(7, 500, 800);
LobotSerialServoMove(8, 500, 800);
LobotSerialServoMove(9, 500, 800);
LobotSerialServoMove(10, 500, 800);
servo_angle1(90);
servo_angle2(90);
servo_angle3(90);
servo_angle4(90);
servo_angle5(90);
delay_ms(805);

}
void zoulu1(void)
{
// #1 P427 #2 P504 #3 P496 #4 P500 #5 P380 #6 P498 #7 P500 #8 P496 #9 P496 #10 P502
LobotSerialServoMove(1, 427, 500);
LobotSerialServoMove(2, 504, 500);
LobotSerialServoMove(3, 496, 500);
LobotSerialServoMove(4, 500, 500);
LobotSerialServoMove(5, 380, 500);
LobotSerialServoMove(6, 498, 500);
LobotSerialServoMove(7, 500, 500);
LobotSerialServoMove(8, 496, 500);
LobotSerialServoMove(9, 496, 500);
LobotSerialServoMove(10, 502, 500);
delay_ms(505);

// #1 P430 #2 P505 #3 P494 #4 P504 #5 P484 #6 P380 #7 P727 #8 P537 #9 P496 #10 P500
LobotSerialServoMove(1, 430, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 494, 500);
LobotSerialServoMove(4, 504, 500);
LobotSerialServoMove(5, 484, 500);
LobotSerialServoMove(6, 380, 500);
LobotSerialServoMove(7, 727, 500);
LobotSerialServoMove(8, 537, 500);
LobotSerialServoMove(9, 496, 500);
LobotSerialServoMove(10, 500,500);
delay_ms(505);

// #1 P490 #2 P560 #3 P494 #4 P501 #5 P500 #6 P382 #7 P718 #8 P534 #9 P496 #10 P502
LobotSerialServoMove(1, 490, 500);
LobotSerialServoMove(2, 560, 500);
LobotSerialServoMove(3, 494, 500);
LobotSerialServoMove(4, 501, 500);
LobotSerialServoMove(5, 500, 500);
LobotSerialServoMove(6, 382, 500);
LobotSerialServoMove(7, 718, 500);
LobotSerialServoMove(8, 534, 500);
LobotSerialServoMove(9, 496, 500);
LobotSerialServoMove(10, 502,500);
delay_ms(505);

// #1 P583 #2 P557 #3 P492 #4 P498 #5 P561 #6 P383 #7 P711 #8 P531 #9 P496 #10 P503
LobotSerialServoMove(1, 583, 500);
LobotSerialServoMove(2, 557, 500);
LobotSerialServoMove(3, 492, 500);
LobotSerialServoMove(4, 498, 500);
LobotSerialServoMove(5, 561, 500);
LobotSerialServoMove(6, 383, 500);
LobotSerialServoMove(7, 711, 500);
LobotSerialServoMove(8, 531, 500);
LobotSerialServoMove(9, 496, 500);
LobotSerialServoMove(10, 503,500);
delay_ms(505);

// #1 P575 #2 P552 #3 P493 #4 P501 #5 P575 #6 P505 #7 P495 #8 P496 #9 P499 #10 P503
LobotSerialServoMove(1, 575, 500);
LobotSerialServoMove(2, 552, 500);
LobotSerialServoMove(3, 493, 500);
LobotSerialServoMove(4, 501, 500);
LobotSerialServoMove(5, 575, 500);
LobotSerialServoMove(6, 505, 500);
LobotSerialServoMove(7, 495, 500);
LobotSerialServoMove(8, 496, 500);
LobotSerialServoMove(9, 499, 500);
LobotSerialServoMove(10, 503,500);
delay_ms(505);

// #1 P521 #2 P389 #3 P530 #4 P623 #5 P564 #6 P515 #7 P504 #8 P495 #9 P500 #10 P502
LobotSerialServoMove(1, 521, 500);
LobotSerialServoMove(2, 389, 500);
LobotSerialServoMove(3, 530, 500);
LobotSerialServoMove(4, 623, 500);
LobotSerialServoMove(5, 564, 500);
LobotSerialServoMove(6, 515, 500);
LobotSerialServoMove(7, 504, 500);
LobotSerialServoMove(8, 495, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 502,500);
delay_ms(505);

// #1 P501 #2 P392 #3 P525 #4 P618 #5 P503 #6 P515 #7 P504 #8 P497 #9 P499 #10 P501
LobotSerialServoMove(1, 501, 500);
LobotSerialServoMove(2, 392, 500);
LobotSerialServoMove(3, 525, 500);
LobotSerialServoMove(4, 618, 500);
LobotSerialServoMove(5, 503, 500);
LobotSerialServoMove(6, 515, 500);
LobotSerialServoMove(7, 504, 500);
LobotSerialServoMove(8, 497, 500);
LobotSerialServoMove(9, 499, 500);
LobotSerialServoMove(10, 501, 500);
delay_ms(505);

}

void zoulu2(void)
{
// #1 P427 #2 P504 #3 P496 #4 P550 #5 P380 #6 P498 #7 P550 #8 P496 #9 P496 #10 P502
LobotSerialServoMove(1, 427, 700);
LobotSerialServoMove(2, 504, 700);
LobotSerialServoMove(3, 496, 700);
LobotSerialServoMove(4, 550, 700);
LobotSerialServoMove(5, 380, 700);
LobotSerialServoMove(6, 498, 700);
LobotSerialServoMove(7, 550, 700);
LobotSerialServoMove(8, 496, 700);
LobotSerialServoMove(9, 496, 700);
LobotSerialServoMove(10, 502, 700);
delay_ms(705);

// #1 P437 #2 P499 #3 P497 #4 P559 #5 P486 #6 P380 #7 P798 #8 P618 #9 P497 #10 P502
LobotSerialServoMove(1, 437, 700);
LobotSerialServoMove(2, 499, 700);
LobotSerialServoMove(3, 497, 700);
LobotSerialServoMove(4, 559, 700);
LobotSerialServoMove(5, 486, 700);
LobotSerialServoMove(6, 380, 700);
LobotSerialServoMove(7, 798, 700);
LobotSerialServoMove(8, 618, 700);
LobotSerialServoMove(9, 497, 700);
LobotSerialServoMove(10, 502, 700);
delay_ms(705);

// #1 P499 #2 P502 #3 P495 #4 P555 #5 P523 #6 P386 #7 P793 #8 P616 #9 P498 #10 P499
LobotSerialServoMove(1, 499, 700);
LobotSerialServoMove(2, 502, 700);
LobotSerialServoMove(3, 495, 700);
LobotSerialServoMove(4, 555, 700);
LobotSerialServoMove(5, 523, 700);
LobotSerialServoMove(6, 386, 700);
LobotSerialServoMove(7, 793, 700);
LobotSerialServoMove(8, 616, 700);
LobotSerialServoMove(9, 498, 700);
LobotSerialServoMove(10, 499, 700);
delay_ms(705);

// #1 P583 #2 P557 #3 P492 #4 P548 #5 P561 #6 P383 #7 P761 #8 P531 #9 P496 #10 P503
LobotSerialServoMove(1, 583, 700);
LobotSerialServoMove(2, 557, 700);
LobotSerialServoMove(3, 492, 700);
LobotSerialServoMove(4, 548, 700);
LobotSerialServoMove(5, 561, 700);
LobotSerialServoMove(6, 383, 700);
LobotSerialServoMove(7, 761, 700);
LobotSerialServoMove(8, 531, 700);
LobotSerialServoMove(9, 496, 700);
LobotSerialServoMove(10, 503, 700);
delay_ms(705);

// #1 P575 #2 P552 #3 P493 #4 P551 #5 P575 #6 P505 #7 P545 #8 P496 #9 P499 #10 P503
LobotSerialServoMove(1, 575, 700);
LobotSerialServoMove(2, 552, 700);
LobotSerialServoMove(3, 493, 700);
LobotSerialServoMove(4, 551, 700);
LobotSerialServoMove(5, 575, 700);
LobotSerialServoMove(6, 505, 700);
LobotSerialServoMove(7, 545, 700);
LobotSerialServoMove(8, 496, 700);
LobotSerialServoMove(9, 499, 700);
LobotSerialServoMove(10, 503, 700);
delay_ms(705);

// #1 P521 #2 P389 #3 P530 #4 P673 #5 P564 #6 P515 #7 P554 #8 P495 #9 P500 #10 P502
LobotSerialServoMove(1, 521, 700);
LobotSerialServoMove(2, 389, 700);
LobotSerialServoMove(3, 530, 700);
LobotSerialServoMove(4, 673, 700);
LobotSerialServoMove(5, 564, 700);
LobotSerialServoMove(6, 515, 700);
LobotSerialServoMove(7, 554, 700);
LobotSerialServoMove(8, 495, 700);
LobotSerialServoMove(9, 500, 700);
LobotSerialServoMove(10, 502, 700);
delay_ms(705);

// #1 P487 #2 P395 #3 P525 #4 P668 #5 P508 #6 P520 #7 P553 #8 P498 #9 P499 #10 P502
LobotSerialServoMove(1, 487, 700);
LobotSerialServoMove(2, 395, 700);
LobotSerialServoMove(3, 525, 700);
LobotSerialServoMove(4, 668, 700);
LobotSerialServoMove(5, 508, 700);
LobotSerialServoMove(6, 520, 700);
LobotSerialServoMove(7, 553, 700);
LobotSerialServoMove(8, 498, 700);
LobotSerialServoMove(9, 499, 700);
LobotSerialServoMove(10, 502, 700);
delay_ms(705);

// #1 P443 #2 P394 #3 P517 #4 P666 #5 P403 #6 P520 #7 P550 #8 P499 #9 P498 #10 P501
LobotSerialServoMove(1, 443, 700);
LobotSerialServoMove(2, 394, 700);
LobotSerialServoMove(3, 517, 700);
LobotSerialServoMove(4, 666, 700);
LobotSerialServoMove(5, 403, 700);
LobotSerialServoMove(6, 520, 700);
LobotSerialServoMove(7, 550, 700);
LobotSerialServoMove(8, 499, 700);
LobotSerialServoMove(9, 498, 700);
LobotSerialServoMove(10, 501, 700);
delay_ms(705);

}

void zoulu3(void)
{
// #1 P425 #2 P505 #3 P504 #4 P545 #5 P425 #6 P552 #7 P551 #8 P507 #9 P497 #10 P501
LobotSerialServoMove(1, 425, zltime+zlyi);
LobotSerialServoMove(2, 505, zltime+zlyi);
LobotSerialServoMove(3, 504, zltime+zlyi);
LobotSerialServoMove(4, 545+zlwanyao, zltime+zlyi);
LobotSerialServoMove(5, 425, zltime+zlyi);
LobotSerialServoMove(6, 552, zltime+zlyi);
LobotSerialServoMove(7, 551, zltime+zlyi);
LobotSerialServoMove(8, 507-zlwanyao, zltime+zlyi);
LobotSerialServoMove(9, 497, zltime+zlyi);
LobotSerialServoMove(10, 501, zltime+zlyi);
delay_ms(zltiming+zlyi);

// #1 P436 #2 P515 #3 P505 #4 P554 #5 P479 #6 P389 #7 P673 #8 P470 #9 P498 #10 P500
LobotSerialServoMove(1, 436, zltime+zler);
LobotSerialServoMove(2, 515, zltime+zler);
LobotSerialServoMove(3, 505, zltime+zler);
LobotSerialServoMove(4, 554+zlwanyao, zltime+zler);
LobotSerialServoMove(5, 479, zltime+zler);
LobotSerialServoMove(6, 389+zltai, zltime+zler);
LobotSerialServoMove(7, 673, zltime+zler);
LobotSerialServoMove(8, 470-zlwanyao, zltime+zler);
LobotSerialServoMove(9, 498, zltime+zler);
LobotSerialServoMove(10, 500, zltime+zler);
delay_ms(zltiming+zler);

// #1 P499 #2 P502 #3 P495 #4 P555 #5 P523 #6 P386 #7 P793 #8 P616 #9 P498 #10 P499
LobotSerialServoMove(1, 500, zltime+zlsan);
LobotSerialServoMove(2, 557, zltime+zlsan);
LobotSerialServoMove(3, 492, zltime+zlsan);
LobotSerialServoMove(4, 548+zlwanyao, zltime+zlsan);
LobotSerialServoMove(5, 480, zltime+zlsan);
LobotSerialServoMove(6, 383, zltime+zlsan);
LobotSerialServoMove(7, 761, zltime+zlsan);
LobotSerialServoMove(8, 531-zlwanyao, zltime+zlsan);
LobotSerialServoMove(9, 496, zltime+zlsan);
LobotSerialServoMove(10, 503, zltime+zlsan);
delay_ms(zltiming+zlsan);

// #1 P583 #2 P557 #3 P492 #4 P548 #5 P561 #6 P383 #7 P761 #8 P531 #9 P496 #10 P503
LobotSerialServoMove(1, 583-0, zltime+zlsi);
LobotSerialServoMove(2, 557, zltime+zlsi);
LobotSerialServoMove(3, 492, zltime+zlsi);
LobotSerialServoMove(4, 548+zlwanyao, zltime+zlsi);
LobotSerialServoMove(5, 561, zltime+zlsi);
LobotSerialServoMove(6, 383, zltime+zlsi);
LobotSerialServoMove(7, 761, zltime+zlsi);
LobotSerialServoMove(8, 531-zlwanyao, zltime+zlsi);
LobotSerialServoMove(9, 496, zltime+zlsi);
LobotSerialServoMove(10, 503, zltime+zlsi);
delay_ms(zltiming+zlsi);

// #1 P575 #2 P552 #3 P493 #4 P551 #5 P575 #6 P505 #7 P545 #8 P496 #9 P499 #10 P503
LobotSerialServoMove(1, 575, zltime+zlwu);
LobotSerialServoMove(2, 552, zltime+zlwu);
LobotSerialServoMove(3, 493, zltime+zlwu);
LobotSerialServoMove(4, 551+zlwanyao, zltime+zlwu);
LobotSerialServoMove(5, 575, zltime+zlwu);
LobotSerialServoMove(6, 505, zltime+zlwu);
LobotSerialServoMove(7, 545, zltime+zlwu);
LobotSerialServoMove(8, 496-zlwanyao, zltime+zlwu);
LobotSerialServoMove(9, 499, zltime+zlwu);
LobotSerialServoMove(10, 503, zltime+zlwu);
delay_ms(zltiming+zlwu);

// #1 P521 #2 P389 #3 P530 #4 P673 #5 P564 #6 P515 #7 P554 #8 P495 #9 P500 #10 P502
LobotSerialServoMove(1, 521, zltime+zlliu);
LobotSerialServoMove(2, 389+zltai, zltime+zlliu);
LobotSerialServoMove(3, 530, zltime+zlliu);
LobotSerialServoMove(4, 673+zlwanyao, zltime+zlliu);
LobotSerialServoMove(5, 564, zltime+zlliu);
LobotSerialServoMove(6, 515, zltime+zlliu);
LobotSerialServoMove(7, 554, zltime+zlliu);
LobotSerialServoMove(8, 495-zlwanyao, zltime+zlliu);
LobotSerialServoMove(9, 500, zltime+zlliu);
LobotSerialServoMove(10, 502, zltime+zlliu);
delay_ms(zltiming+zlliu);

// #1 P477 #2 P386 #3 P384 #4 P793 #5 P501 #6 P502 #7 P555 #8 P505 #9 P501 #10 P500
LobotSerialServoMove(1, 477, zltime+zlqi);
LobotSerialServoMove(2, 386, zltime+zlqi);
LobotSerialServoMove(3, 384, zltime+zlqi);
LobotSerialServoMove(4, 793+zlwanyao, zltime+zlqi);
LobotSerialServoMove(5, 501, zltime+zlqi);
LobotSerialServoMove(6, 557, zltime+zlqi);
LobotSerialServoMove(7, 548, zltime+zlqi);
LobotSerialServoMove(8, 508-zlwanyao, zltime+zlqi);
LobotSerialServoMove(9, 501, zltime+zlqi);
LobotSerialServoMove(10, 500, zltime+zlqi);
delay_ms(zltiming+zlqi);

// #1 P439 #2 P383 #3 P469 #4 P761 #5 P417 #6 P557 #7 P548 #8 P508 #9 P497 #10 P504
LobotSerialServoMove(1, 439, zltime+zlba);
LobotSerialServoMove(2, 383, zltime+zlba);
LobotSerialServoMove(3, 469, zltime+zlba);
LobotSerialServoMove(4, 761+zlwanyao, zltime+zlba);
LobotSerialServoMove(5, 417+0, zltime+zlba);
LobotSerialServoMove(6, 557, zltime+zlba);
LobotSerialServoMove(7, 548, zltime+zlba);
LobotSerialServoMove(8, 508-zlwanyao, zltime+zlba);
LobotSerialServoMove(9, 497, zltime+zlba);
LobotSerialServoMove(10, 504, zltime+zlba);
delay_ms(zltiming+zlba);

}

void zuozhuan1(void)
{
// #1 P425 #2 P505 #3 P504 #4 P545 #5 P400 #6 P585 #7 P625 #8 P635 #9 P497 #10 P501
LobotSerialServoMove(1, 425, zwtime);
LobotSerialServoMove(2, 505, zwtime);
LobotSerialServoMove(3, 504, zwtime);
LobotSerialServoMove(4, 545, zwtime);
LobotSerialServoMove(5, 400, zwtime);
LobotSerialServoMove(6, 585, zwtime);
LobotSerialServoMove(7, 625, zwtime);
LobotSerialServoMove(8, 635, zwtime);
LobotSerialServoMove(9, 497, zwtime);
LobotSerialServoMove(10, 501, zwtime);
delay_ms(zwtiming);

// #1 P418 #2 P506 #3 P503 #4 P465 #5 P512 #6 P453 #7 P658 #8 P503 #9 P550 #10 P497
LobotSerialServoMove(1, 418, zwtime);
LobotSerialServoMove(2, 506, zwtime);
LobotSerialServoMove(3, 503, zwtime);
LobotSerialServoMove(4, 465, zwtime);
LobotSerialServoMove(5, 512, zwtime);
LobotSerialServoMove(6, 453, zwtime);
LobotSerialServoMove(7, 658, zwtime);
LobotSerialServoMove(8, 503, zwtime);
LobotSerialServoMove(9, zhuanwan1, zwtime);
LobotSerialServoMove(10, 497, zwtime);
delay_ms(zwtiming);

// #1 P499 #2 P507 #3 P503 #4 P465 #5 P518 #6 P333 #7 P659 #8 P509 #9 P550 #10 P498
LobotSerialServoMove(1, 499, zwtime);
LobotSerialServoMove(2, 507, zwtime);
LobotSerialServoMove(3, 503, zwtime);
LobotSerialServoMove(4, 465, zwtime);
LobotSerialServoMove(5, 518, zwtime);
LobotSerialServoMove(6, 333, zwtime);
LobotSerialServoMove(7, 659, zwtime);
LobotSerialServoMove(8, 509, zwtime);
LobotSerialServoMove(9, zhuanwan1, zwtime);
LobotSerialServoMove(10, 498, zwtime);
delay_ms(zwtiming);

// #1 P499 #2 P502 #3 P495 #4 P555 #5 P575 #6 P386 #7 P793 #8 P616 #9 P550 #10 P500
LobotSerialServoMove(1, 499, zwtime);
LobotSerialServoMove(2, 502, zwtime);
LobotSerialServoMove(3, 495, zwtime);
LobotSerialServoMove(4, 555, zwtime);
LobotSerialServoMove(5, 575, zwtime);
LobotSerialServoMove(6, 386, zwtime);
LobotSerialServoMove(7, 793, zwtime);
LobotSerialServoMove(8, 616, zwtime);
LobotSerialServoMove(9, zhuanwan1, zwtime);
LobotSerialServoMove(10, 500, zwtime);
delay_ms(zwtiming);

// #1 P575 #2 P552 #3 P493 #4 P551 #5 P575 #6 P505 #7 P545 #8 P496 #9 P499 #10 P503
LobotSerialServoMove(1, 575, zwtime+100);
LobotSerialServoMove(2, 552, zwtime+100);
LobotSerialServoMove(3, 493, zwtime+100);
LobotSerialServoMove(4, 551, zwtime+100);
LobotSerialServoMove(5, 575, zwtime+100);
LobotSerialServoMove(6, 505, zwtime+100);
LobotSerialServoMove(7, 545, zwtime+100);
LobotSerialServoMove(8, 496, zwtime+100);
LobotSerialServoMove(9, 499, zwtime+100);
LobotSerialServoMove(10, 503, zwtime+100);
delay_ms(zwtiming+100);

// #1 P521 #2 P389 #3 P530 #4 P673 #5 P564 #6 P515 #7 P554 #8 P495 #9 P500 #10 P502
LobotSerialServoMove(1, 521, zwtime);
LobotSerialServoMove(2, 389, zwtime);
LobotSerialServoMove(3, 530, zwtime);
LobotSerialServoMove(4, 673, zwtime);
LobotSerialServoMove(5, 564, zwtime);
LobotSerialServoMove(6, 515, zwtime);
LobotSerialServoMove(7, 554, zwtime);
LobotSerialServoMove(8, 495, zwtime);
LobotSerialServoMove(9, 500, zwtime);
LobotSerialServoMove(10, 502, zwtime);
delay_ms(zwtiming);

// #1 P477 #2 P386 #3 P384 #4 P793 #5 P501 #6 P502 #7 P555 #8 P505 #9 P501 #10 P500
LobotSerialServoMove(1, 477, zwtime);
LobotSerialServoMove(2, 386, zwtime);
LobotSerialServoMove(3, 384, zwtime);
LobotSerialServoMove(4, 793, zwtime);
LobotSerialServoMove(5, 501, zwtime);
LobotSerialServoMove(6, 502, zwtime);
LobotSerialServoMove(7, 555, zwtime);
LobotSerialServoMove(8, 505, zwtime);
LobotSerialServoMove(9, 501, zwtime);
LobotSerialServoMove(10, 500, zwtime);
delay_ms(zwtiming);

// #1 P439 #2 P383 #3 P469 #4 P761 #5 P417 #6 P557 #7 P548 #8 P508 #9 P497 #10 P504
LobotSerialServoMove(1, 439, zwtime);
LobotSerialServoMove(2, 383, zwtime);
LobotSerialServoMove(3, 469, zwtime);
LobotSerialServoMove(4, 761, zwtime);
LobotSerialServoMove(5, 417, zwtime);
LobotSerialServoMove(6, 557, zwtime);
LobotSerialServoMove(7, 548, zwtime);
LobotSerialServoMove(8, 508, zwtime);
LobotSerialServoMove(9, 497, zwtime);
LobotSerialServoMove(10, 504, zwtime);
delay_ms(zwtiming);

}

void zuozhuan2(void)
{
// #1 P425 #2 P505 #3 P504 #4 P545 #5 P400 #6 P585 #7 P625 #8 P635 #9 P497 #10 P501
LobotSerialServoMove(1, 425, zwtime+zwyi);
LobotSerialServoMove(2, 505, zwtime+zwyi);
LobotSerialServoMove(3, 504, zwtime+zwyi);
LobotSerialServoMove(4, 545+wanyao, zwtime+zwyi);
LobotSerialServoMove(5, 400, zwtime+zwyi);
LobotSerialServoMove(6, 585, zwtime+zwyi);
LobotSerialServoMove(7, 625, zwtime+zwyi);
LobotSerialServoMove(8, 635-wanyao, zwtime+zwyi);
LobotSerialServoMove(9, 497, zwtime+zwyi);
LobotSerialServoMove(10, 501, zwtime+zwyi);
delay_ms(zwtiming+zwyi);

// #1 P418 #2 P506 #3 P503 #4 P465 #5 P512 #6 P453 #7 P658 #8 P503 #9 P550 #10 P497
LobotSerialServoMove(1, 418, zwtime);
LobotSerialServoMove(2, 506, zwtime);
LobotSerialServoMove(3, 503, zwtime);
LobotSerialServoMove(4, 465+wanyao, zwtime);
LobotSerialServoMove(5, 512, zwtime);
LobotSerialServoMove(6, 453, zwtime);
LobotSerialServoMove(7, 658, zwtime);
LobotSerialServoMove(8, 503-wanyao, zwtime);
LobotSerialServoMove(9, zhuanwan1, zwtime);
LobotSerialServoMove(10, 497, zwtime);
delay_ms(zwtiming);

// #1 P499 #2 P507 #3 P503 #4 P465 #5 P518 #6 P333 #7 P659 #8 P509 #9 P550 #10 P498
LobotSerialServoMove(1, 499, zwtime+zwsan);
LobotSerialServoMove(2, 507, zwtime+zwsan);
LobotSerialServoMove(3, 503, zwtime+zwsan);
LobotSerialServoMove(4, 465+wanyao, zwtime+zwsan);
LobotSerialServoMove(5, 518, zwtime+zwsan);
LobotSerialServoMove(6, 333, zwtime+zwsan);
LobotSerialServoMove(7, 659, zwtime+zwsan);
LobotSerialServoMove(8, 509-wanyao, zwtime+zwsan);
LobotSerialServoMove(9, zhuanwan1, zwtime+zwsan);
LobotSerialServoMove(10, 498, zwtime+zwsan);
delay_ms(zwtiming+zwsan);

// #1 P499 #2 P502 #3 P495 #4 P555 #5 P575 #6 P386 #7 P793 #8 P616 #9 P550 #10 P500
LobotSerialServoMove(1, 499, zwtime+zwsi);
LobotSerialServoMove(2, 502, zwtime+zwsi);
LobotSerialServoMove(3, 495, zwtime+zwsi);
LobotSerialServoMove(4, 555+wanyao, zwtime+zwsi);
LobotSerialServoMove(5, 575, zwtime+zwsi);
LobotSerialServoMove(6, 386, zwtime+zwsi);
LobotSerialServoMove(7, 793, zwtime+zwsi);
LobotSerialServoMove(8, 616-wanyao, zwtime+zwsi);
LobotSerialServoMove(9, zhuanwan1, zwtime+zwsi);
LobotSerialServoMove(10, 500, zwtime+zwsi);
delay_ms(zwtiming);

// #1 P575 #2 P552 #3 P493 #4 P551 #5 P575 #6 P505 #7 P545 #8 P496 #9 P499 #10 P503
LobotSerialServoMove(1, 575, zwtime+zwwu);
LobotSerialServoMove(2, 552, zwtime+zwwu);
LobotSerialServoMove(3, 493, zwtime+zwwu);
LobotSerialServoMove(4, 551+wanyao, zwtime+zwwu);
LobotSerialServoMove(5, 575, zwtime+zwwu);
LobotSerialServoMove(6, 505, zwtime+zwwu);
LobotSerialServoMove(7, 545, zwtime+zwwu);
LobotSerialServoMove(8, 496-wanyao, zwtime+zwwu);
LobotSerialServoMove(9, 499, zwtime+zwwu);
LobotSerialServoMove(10, 503, zwtime+zwwu);
delay_ms(zwtiming+zwwu);

// #1 P521 #2 P389 #3 P530 #4 P673 #5 P564 #6 P515 #7 P554 #8 P495 #9 P500 #10 P502
LobotSerialServoMove(1, 521, zwtime+zwliu);
LobotSerialServoMove(2, 389, zwtime+zwliu);
LobotSerialServoMove(3, 530, zwtime+zwliu);
LobotSerialServoMove(4, 673+wanyao, zwtime+zwliu);
LobotSerialServoMove(5, 564, zwtime+zwliu);
LobotSerialServoMove(6, 515, zwtime+zwliu);
LobotSerialServoMove(7, 554, zwtime+zwliu);
LobotSerialServoMove(8, 495-wanyao, zwtime+zwliu);
LobotSerialServoMove(9, 500, zwtime+zwliu);
LobotSerialServoMove(10, 502, zwtime+zwliu);
delay_ms(zwtiming+zwliu);

// #1 P477 #2 P386 #3 P384 #4 P793 #5 P501 #6 P502 #7 P555 #8 P505 #9 P501 #10 P500
LobotSerialServoMove(1, 477, zwtime);
LobotSerialServoMove(2, 386, zwtime);
LobotSerialServoMove(3, 384, zwtime);
LobotSerialServoMove(4, 793+wanyao, zwtime);
LobotSerialServoMove(5, 501, zwtime);
LobotSerialServoMove(6, 502, zwtime);
LobotSerialServoMove(7, 555, zwtime);
LobotSerialServoMove(8, 505-wanyao, zwtime);
LobotSerialServoMove(9, 501, zwtime);
LobotSerialServoMove(10, 500, zwtime);
delay_ms(zwtiming);

// #1 P439 #2 P383 #3 P469 #4 P761 #5 P417 #6 P557 #7 P548 #8 P508 #9 P497 #10 P504
LobotSerialServoMove(1, 439, zwtime);
LobotSerialServoMove(2, 383, zwtime);
LobotSerialServoMove(3, 469, zwtime);
LobotSerialServoMove(4, 761+wanyao, zwtime);
LobotSerialServoMove(5, 417, zwtime);
LobotSerialServoMove(6, 557, zwtime);
LobotSerialServoMove(7, 548, zwtime);
LobotSerialServoMove(8, 508-wanyao, zwtime);
LobotSerialServoMove(9, 497, zwtime);
LobotSerialServoMove(10, 504, zwtime);
delay_ms(zwtiming);

}

void youzhuan1(void)
{
// #1 P425 #2 P505 #3 P504 #4 P545 #5 P425 #6 P552 #7 P551 #8 P507 #9 P500 #10 P500
LobotSerialServoMove(1, 425, zwtime);
LobotSerialServoMove(2, 505, zwtime);
LobotSerialServoMove(3, 504, zwtime);
LobotSerialServoMove(4, 545, zwtime);
LobotSerialServoMove(5, 425, zwtime);
LobotSerialServoMove(6, 552, zwtime);
LobotSerialServoMove(7, 551, zwtime);
LobotSerialServoMove(8, 507, zwtime);
LobotSerialServoMove(9, 500, zwtime);
LobotSerialServoMove(10, 500, zwtime);
delay_ms(zwtime+5);

// #1 P436 #2 P515 #3 P505 #4 P554 #5 P479 #6 P389 #7 P673 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 436, zwtime);
LobotSerialServoMove(2, 515, zwtime);
LobotSerialServoMove(3, 505, zwtime);
LobotSerialServoMove(4, 554, zwtime);
LobotSerialServoMove(5, 479, zwtime);
LobotSerialServoMove(6, 389, zwtime);
LobotSerialServoMove(7, 673, zwtime);
LobotSerialServoMove(8, 470, zwtime);
LobotSerialServoMove(9, 450, zwtime);
LobotSerialServoMove(10, 500, zwtime);
delay_ms(zwtime+5);

// #1 P499 #2 P502 #3 P495 #4 P555 #5 P523 #6 P386 #7 P793 #8 P616 #9 P500 #10 P500
LobotSerialServoMove(1, 499, zwtime);
LobotSerialServoMove(2, 502, zwtime);
LobotSerialServoMove(3, 495, zwtime);
LobotSerialServoMove(4, 555, zwtime);
LobotSerialServoMove(5, 523, zwtime);
LobotSerialServoMove(6, 386, zwtime);
LobotSerialServoMove(7, 793, zwtime);
LobotSerialServoMove(8, 616, zwtime);
LobotSerialServoMove(9, 450, zwtime);
LobotSerialServoMove(10, 500, zwtime);
delay_ms(zwtime+5);

// #1 P583 #2 P557 #3 P492 #4 P548 #5 P561 #6 P383 #7 P761 #8 P531 #9 P500 #10 P500
LobotSerialServoMove(1, 583, zwtime);
LobotSerialServoMove(2, 557, zwtime);
LobotSerialServoMove(3, 492, zwtime);
LobotSerialServoMove(4, 548, zwtime);
LobotSerialServoMove(5, 561, zwtime);
LobotSerialServoMove(6, 383, zwtime);
LobotSerialServoMove(7, 761, zwtime);
LobotSerialServoMove(8, 531, zwtime);
LobotSerialServoMove(9, 450, zwtime);
LobotSerialServoMove(10, 500, zwtime);
delay_ms(zwtime+5);

// #1 P600 #2 P585 #3 P365 #4 P625 #5 P575 #6 P505 #7 P545 #8 P496 #9 P500 #10 P500
LobotSerialServoMove(1, 600, zwtime);
LobotSerialServoMove(2, 585, zwtime);
LobotSerialServoMove(3, 365, zwtime);
LobotSerialServoMove(4, 625, zwtime);
LobotSerialServoMove(5, 575, zwtime);
LobotSerialServoMove(6, 505, zwtime);
LobotSerialServoMove(7, 545, zwtime);
LobotSerialServoMove(8, 496, zwtime);
LobotSerialServoMove(9, 500, zwtime);
LobotSerialServoMove(10, 500, zwtime);
delay_ms(zwtime+5);

// #1 P488 #2 P453 #3 P497 #4 P658 #5 P582 #6 P506 #7 P465 #8 P497 #9 P500 #10 P450
LobotSerialServoMove(1, 488, zwtime);
LobotSerialServoMove(2, 453, zwtime);
LobotSerialServoMove(3, 497, zwtime);
LobotSerialServoMove(4, 658, zwtime);
LobotSerialServoMove(5, 582, zwtime);
LobotSerialServoMove(6, 506, zwtime);
LobotSerialServoMove(7, 465, zwtime);
LobotSerialServoMove(8, 497, zwtime);
LobotSerialServoMove(9, 500, zwtime);
LobotSerialServoMove(10, 450, zwtime);
delay_ms(zwtime+5);

// #1 P482 #2 P333 #3 P491 #4 P659 #5 P501 #6 P507 #7 P465 #8 P497 #9 P500 #10 P450
LobotSerialServoMove(1, 482, zwtime);
LobotSerialServoMove(2, 333, zwtime);
LobotSerialServoMove(3, 491, zwtime);
LobotSerialServoMove(4, 659, zwtime);
LobotSerialServoMove(5, 501, zwtime);
LobotSerialServoMove(6, 507, zwtime);
LobotSerialServoMove(7, 465, zwtime);
LobotSerialServoMove(8, 497, zwtime);
LobotSerialServoMove(9, 500, zwtime);
LobotSerialServoMove(10, 450, zwtime);
delay_ms(zwtime+5);

// #1 P425 #2 P386 #3 P384 #4 P793 #5 P501 #6 P502 #7 P555 #8 P505 #9 P500 #10 P450
LobotSerialServoMove(1, 425, zwtime);
LobotSerialServoMove(2, 386, zwtime);
LobotSerialServoMove(3, 384, zwtime);
LobotSerialServoMove(4, 793, zwtime);
LobotSerialServoMove(5, 501, zwtime);
LobotSerialServoMove(6, 502, zwtime);
LobotSerialServoMove(7, 555, zwtime);
LobotSerialServoMove(8, 505, zwtime);
LobotSerialServoMove(9, 500, zwtime);
LobotSerialServoMove(10, 450, zwtime);
delay_ms(zwtime+5);

}

void zoulu4(void)
{
	// #1 P425 #2 P505 #3 P504 #4 P545 #5 P425 #6 P552 #7 P551 #8 P507 #9 P497 #10 P501
LobotSerialServoMove(1, 425, zltime4+zlyi4);
LobotSerialServoMove(2, 505, zltime4+zlyi4);
LobotSerialServoMove(3, 500, zltime4+zlyi4);
LobotSerialServoMove(4, 500+zlwanyao4, zltime4+zlyi4);
LobotSerialServoMove(5, 425, zltime4+zlyi4);
LobotSerialServoMove(6, 553, zltime4+zlyi4);
LobotSerialServoMove(7, 500+zlwanyao4, zltime4+zlyi4);
LobotSerialServoMove(8, 506, zltime+zlyi4);
LobotSerialServoMove(9, 497, zltime4+zlyi4);
LobotSerialServoMove(10, 501, zltime4+zlyi4);
delay_ms(zltiming4+zlyi4);

// #1 P436 #2 P515 #3 P505 #4 P554 #5 P479 #6 P389 #7 P673 #8 P470 #9 P498 #10 P500
LobotSerialServoMove(1, 436, zltime4+zler4);
LobotSerialServoMove(2, 515, zltime4+zler4);
LobotSerialServoMove(3, 510, zltime4+zler4);
LobotSerialServoMove(4, 500+zlwanyao4, zltime4+zler4);
LobotSerialServoMove(5, 479, zltime4+zler4);
LobotSerialServoMove(6, 389+zltai4, zltime4+zler4);
LobotSerialServoMove(7, 500+zlwanyao4, zltime4+zler4);
LobotSerialServoMove(8, 347, zltime+zler4);
LobotSerialServoMove(9, 498, zltime4+zler4);
LobotSerialServoMove(10, 500, zltime4+zler4);
delay_ms(zltiming4+zler4);

// #1 P499 #2 P502 #3 P495 #4 P555 #5 P523 #6 P386 #7 P793 #8 P616 #9 P498 #10 P499
LobotSerialServoMove(1, 500, zltime4+zlsan4);
LobotSerialServoMove(2, 557, zltime4+zlsan4);
LobotSerialServoMove(3, 490, zltime4+zlsan4);
LobotSerialServoMove(4, 500+zlwanyao4, zltime4+zlsan4);
LobotSerialServoMove(5, 480, zltime4+zlsan4);
LobotSerialServoMove(6, 383, zltime4+zlsan4);
LobotSerialServoMove(7, 500+zlwanyao4, zltime4+zlsan4);
LobotSerialServoMove(8, 320, zltime4+zlsan4);
LobotSerialServoMove(9, 496, zltime4+zlsan4);
LobotSerialServoMove(10, 503, zltime4+zlsan4);
delay_ms(zltiming4+zlsan4);

// #1 P583 #2 P557 #3 P492 #4 P548 #5 P561 #6 P383 #7 P761 #8 P531 #9 P496 #10 P503
LobotSerialServoMove(1, 583-0, zltime4+zlsi4);
LobotSerialServoMove(2, 557, zltime4+zlsi4);
LobotSerialServoMove(3, 490, zltime4+zlsi4);
LobotSerialServoMove(4, 500+zlwanyao4, zltime4+zlsi4);
LobotSerialServoMove(5, 561, zltime4+zlsi4);
LobotSerialServoMove(6, 383, zltime4+zlsi4);
LobotSerialServoMove(7, 500+zlwanyao4, zltime4+zlsi4);
LobotSerialServoMove(8, 320, zltime4+zlsi4);
LobotSerialServoMove(9, 496, zltime4+zlsi4);
LobotSerialServoMove(10, 503, zltime4+zlsi4);
delay_ms(zltiming4+zlsi4);

// #1 P575 #2 P552 #3 P493 #4 P551 #5 P575 #6 P505 #7 P545 #8 P496 #9 P499 #10 P503
LobotSerialServoMove(1, 575, zltime4+zlwu4);
LobotSerialServoMove(2, 552, zltime4+zlwu4);
LobotSerialServoMove(3, 494, zltime4+zlwu4);
LobotSerialServoMove(4, 500+zlwanyao4, zltime4+zlwu4);
LobotSerialServoMove(5, 575, zltime4+zlwu4);
LobotSerialServoMove(6, 505, zltime4+zlwu4);
LobotSerialServoMove(7, 500+zlwanyao4, zltime4+zlwu4);
LobotSerialServoMove(8, 501, zltime4+zlwu4);
LobotSerialServoMove(9, 499, zltime4+zlwu4);
LobotSerialServoMove(10, 503, zltime4+zlwu4);
delay_ms(zltiming4+zlwu4);

// #1 P521 #2 P389 #3 P530 #4 P673 #5 P564 #6 P515 #7 P554 #8 P495 #9 P500 #10 P502
LobotSerialServoMove(1, 521, zltime4+zlliu4);
LobotSerialServoMove(2, 389+zltai4, zltime4+zlliu4);
LobotSerialServoMove(3, 650, zltime4+zlliu4);
LobotSerialServoMove(4, 500+zlwanyao4, zltime4+zlliu4);
LobotSerialServoMove(5, 564, zltime4+zlliu4);
LobotSerialServoMove(6, 515, zltime4+zlliu4);
LobotSerialServoMove(7, 500+zlwanyao4, zltime4+zlliu4);
LobotSerialServoMove(8, 491, zltime+zlliu4);
LobotSerialServoMove(9, 500, zltime4+zlliu4);
LobotSerialServoMove(10, 502, zltime4+zlliu4);
delay_ms(zltiming4+zlliu4);

// #1 P477 #2 P386 #3 P384 #4 P793 #5 P501 #6 P502 #7 P555 #8 P505 #9 P501 #10 P500
LobotSerialServoMove(1, 477, zltime4+zlqi4);
LobotSerialServoMove(2, 386, zltime4+zlqi4);
LobotSerialServoMove(3, 680, zltime4+zlqi4);
LobotSerialServoMove(4, 500+zlwanyao4, zltime+zlqi4);
LobotSerialServoMove(5, 501, zltime4+zlqi4);
LobotSerialServoMove(6, 557, zltime4+zlqi4);
LobotSerialServoMove(7, 500+zlwanyao4, zltime4+zlqi4);
LobotSerialServoMove(8, 510, zltime4+zlqi4);
LobotSerialServoMove(9, 501, zltime4+zlqi4);
LobotSerialServoMove(10, 500, zltime4+zlqi4);
delay_ms(zltiming4+zlqi4);

// #1 P439 #2 P383 #3 P469 #4 P761 #5 P417 #6 P557 #7 P548 #8 P508 #9 P497 #10 P504
LobotSerialServoMove(1, 439, zltime4+zlba4);
LobotSerialServoMove(2, 383, zltime4+zlba4);
LobotSerialServoMove(3, 680, zltime4+zlba4);
LobotSerialServoMove(4, 500+zlwanyao4, zltime4+zlba4);
LobotSerialServoMove(5, 417+0, zltime4+zlba4);
LobotSerialServoMove(6, 557, zltime4+zlba4);
LobotSerialServoMove(7, 500+zlwanyao4, zltime4+zlba4);
LobotSerialServoMove(8, 510, zltime4+zlba4);
LobotSerialServoMove(9, 497, zltime4+zlba4);
LobotSerialServoMove(10, 504, zltime4+zlba4);
delay_ms(zltiming4+zlba4);


}

void zoulu5(void)
{
// #1 P425 #2 P505 #3 P500 #4 P500 #5 P425 #6 P553 #7 P500 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 425, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 500, 200);
LobotSerialServoMove(4, 500+zlwanyao5, 200);
LobotSerialServoMove(5, 425, 200);
LobotSerialServoMove(6, 553, 200);
LobotSerialServoMove(7, 500+zlwanyao5, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P436 #2 P515 #3 P510 #4 P500 #5 P479 #6 P340 #7 P550 #8 P335 #9 P500 #10 P500
LobotSerialServoMove(1, 436, 150);
LobotSerialServoMove(2, 515, 150);
LobotSerialServoMove(3, 510, 150);
LobotSerialServoMove(4, 500+zlwanyao5, 150);
LobotSerialServoMove(5, 479, 150);
LobotSerialServoMove(6, 340+zltai5, 150);
LobotSerialServoMove(7, 550+zlwanyao5, 150);
LobotSerialServoMove(8, 335, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P583 #2 P557 #3 P490 #4 P500 #5 P561 #6 P383 #7 P500 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 583, 150);
LobotSerialServoMove(2, 557, 150);
LobotSerialServoMove(3, 490, 150);
LobotSerialServoMove(4, 500+zlwanyao5, 150);
LobotSerialServoMove(5, 561, 150);
LobotSerialServoMove(6, 383, 150);
LobotSerialServoMove(7, 500+zlwanyao5, 150);
LobotSerialServoMove(8, 320, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P575 #2 P552 #3 P494 #4 P500 #5 P575 #6 P505 #7 P500 #8 P501 #9 P500 #10 P500
LobotSerialServoMove(1, 575, 200);
LobotSerialServoMove(2, 552, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 500+zlwanyao5, 200);
LobotSerialServoMove(5, 575, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 500+zlwanyao5, 200);
LobotSerialServoMove(8, 501, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P521 #2 P340 #3 P665 #4 P550 #5 P564 #6 P515 #7 P500 #8 P491 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 150);
LobotSerialServoMove(2, 340+zltai5, 150);
LobotSerialServoMove(3, 665, 150);
LobotSerialServoMove(4, 550+zlwanyao5, 150);
LobotSerialServoMove(5, 564, 150);
LobotSerialServoMove(6, 515, 150);
LobotSerialServoMove(7, 500+zlwanyao5, 150);
LobotSerialServoMove(8, 491, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P439 #2 P383 #3 P680 #4 P500 #5 P417 #6 P557 #7 P500 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 439, 150);
LobotSerialServoMove(2, 383, 150);
LobotSerialServoMove(3, 680, 150);
LobotSerialServoMove(4, 500+zlwanyao5, 150);
LobotSerialServoMove(5, 417, 150);
LobotSerialServoMove(6, 557, 150);
LobotSerialServoMove(7, 500+zlwanyao5, 150);
LobotSerialServoMove(8, 510, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

}

void zuozhuan3(void)
{
	// #1 P425 #2 P505 #3 P500 #4 P500 #5 P425 #6 P553 #7 P500 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 425, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 500, 200);
LobotSerialServoMove(4, 500+zlwanyao5, 200);
LobotSerialServoMove(5, 425, 200);
LobotSerialServoMove(6, 553, 200);
LobotSerialServoMove(7, 500+zlwanyao5, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 519, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P436 #2 P515 #3 P510 #4 P500 #5 P479 #6 P340 #7 P550 #8 P335 #9 P500 #10 P500
LobotSerialServoMove(1, 436, 150);
LobotSerialServoMove(2, 515, 150);
LobotSerialServoMove(3, 510, 150);
LobotSerialServoMove(4, 500+zlwanyao5, 150);
LobotSerialServoMove(5, 479, 150);
LobotSerialServoMove(6, 340+zltai5, 150);
LobotSerialServoMove(7, 550+zlwanyao5, 150);
LobotSerialServoMove(8, 335, 150);
LobotSerialServoMove(9, 519, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P583 #2 P557 #3 P490 #4 P500 #5 P561 #6 P383 #7 P500 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 583, 150);
LobotSerialServoMove(2, 557, 150);
LobotSerialServoMove(3, 490, 150);
LobotSerialServoMove(4, 500+zlwanyao5, 150);
LobotSerialServoMove(5, 561, 150);
LobotSerialServoMove(6, 383, 150);
LobotSerialServoMove(7, 500+zlwanyao5, 150);
LobotSerialServoMove(8, 320, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P575 #2 P552 #3 P494 #4 P500 #5 P575 #6 P505 #7 P500 #8 P501 #9 P500 #10 P500
LobotSerialServoMove(1, 575, 200);
LobotSerialServoMove(2, 552, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 500+zlwanyao5, 200);
LobotSerialServoMove(5, 575, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 500+zlwanyao5, 200);
LobotSerialServoMove(8, 501, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P521 #2 P340 #3 P665 #4 P550 #5 P564 #6 P515 #7 P500 #8 P491 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 150);
LobotSerialServoMove(2, 340+zltai5, 150);
LobotSerialServoMove(3, 665, 150);
LobotSerialServoMove(4, 550+zlwanyao5, 150);
LobotSerialServoMove(5, 564, 150);
LobotSerialServoMove(6, 515, 150);
LobotSerialServoMove(7, 500+zlwanyao5, 150);
LobotSerialServoMove(8, 491, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P439 #2 P383 #3 P680 #4 P500 #5 P417 #6 P557 #7 P500 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 439, 150);
LobotSerialServoMove(2, 383, 150);
LobotSerialServoMove(3, 680, 150);
LobotSerialServoMove(4, 500+zlwanyao5, 150);
LobotSerialServoMove(5, 417, 150);
LobotSerialServoMove(6, 557, 150);
LobotSerialServoMove(7, 500+zlwanyao5, 150);
LobotSerialServoMove(8, 510, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);
}

void zoulu6(void)
{
// #1 P425 #2 P505 #3 P500 #4 P480 #5 P480 #6 P510 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 425, 280);
LobotSerialServoMove(2, 505, 280);
LobotSerialServoMove(3, 500, 280);
LobotSerialServoMove(4, 480+zlwanyao6, 280);
LobotSerialServoMove(5, 480, 280);
LobotSerialServoMove(6, 510, 280);
LobotSerialServoMove(7, 480+zlwanyao6, 280);
LobotSerialServoMove(8, 506, 280);
LobotSerialServoMove(9, 500, 280);
LobotSerialServoMove(10, 500, 280);
delay_ms(285);

// #1 P436 #2 P515 #3 P510 #4 P480 #5 P479 #6 P415 #7 P430 #8 P335 #9 P500 #10 P500
LobotSerialServoMove(1, 436, 150);
LobotSerialServoMove(2, 515, 150);
LobotSerialServoMove(3, 510, 150);
LobotSerialServoMove(4, 480, 150);
LobotSerialServoMove(5, 479, 150);
LobotSerialServoMove(6, 415, 150);
LobotSerialServoMove(7, 480+zlwanyao6, 150);
LobotSerialServoMove(8, 335, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P530 #2 P557 #3 P490 #4 P480 #5 P560 #6 P383 #7 P480 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 530, 150);
LobotSerialServoMove(2, 557, 150);
LobotSerialServoMove(3, 490, 150);
LobotSerialServoMove(4, 480+zlwanyao6, 150);
LobotSerialServoMove(5, 560, 150);
LobotSerialServoMove(6, 383, 150);
LobotSerialServoMove(7, 480+zlwanyao6, 150);
LobotSerialServoMove(8, 320, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P520 #2 P510 #3 P494 #4 P480 #5 P575 #6 P505 #7 P480 #8 P500 #9 P520 #10 P500
LobotSerialServoMove(1, 520, 180);
LobotSerialServoMove(2, 510, 180);
LobotSerialServoMove(3, 494, 180);
LobotSerialServoMove(4, 480+zlwanyao6, 180);
LobotSerialServoMove(5, 575, 180);
LobotSerialServoMove(6, 505, 180);
LobotSerialServoMove(7, 480+zlwanyao6, 180);
LobotSerialServoMove(8, 500, 180);
LobotSerialServoMove(9, 520, 180);
LobotSerialServoMove(10, 500, 180);
delay_ms(185);

// #1 P521 #2 P415 #3 P665 #4 P430 #5 P564 #6 P515 #7 P480 #8 P490 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 150);
LobotSerialServoMove(2, 415, 150);
LobotSerialServoMove(3, 665, 150);
LobotSerialServoMove(4, 480, 150);
LobotSerialServoMove(5, 564, 150);
LobotSerialServoMove(6, 515, 150);
LobotSerialServoMove(7, 480+zlwanyao6, 150);
LobotSerialServoMove(8, 490, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P440 #2 P383 #3 P680 #4 P480 #5 P470 #6 P557 #7 P480 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 150);
LobotSerialServoMove(2, 383, 150);
LobotSerialServoMove(3, 680, 150);
LobotSerialServoMove(4, 480+zlwanyao6, 150);
LobotSerialServoMove(5, 470, 150);
LobotSerialServoMove(6, 557, 150);
LobotSerialServoMove(7, 480+zlwanyao6, 150);
LobotSerialServoMove(8, 510, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

}


void zuozhuan4(void)
{	
// #1 P425 #2 P505 #3 P500 #4 P480 #5 P480 #6 P510 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 425, 280);
LobotSerialServoMove(2, 505, 280);
LobotSerialServoMove(3, 500, 280);
LobotSerialServoMove(4, 480+zlwanyao6, 280);
LobotSerialServoMove(5, 480, 280);
LobotSerialServoMove(6, 510, 280);
LobotSerialServoMove(7, 480+zlwanyao6, 280);
LobotSerialServoMove(8, 506, 280);
LobotSerialServoMove(9, 500, 280);
LobotSerialServoMove(10, 500, 280);
delay_ms(285);

// #1 P436 #2 P515 #3 P510 #4 P480 #5 P479 #6 P415 #7 P430 #8 P335 #9 P500 #10 P500
LobotSerialServoMove(1, 436, 150);
LobotSerialServoMove(2, 515, 150);
LobotSerialServoMove(3, 510, 150);
LobotSerialServoMove(4, 480+zlwanyao6, 150);
LobotSerialServoMove(5, 479, 150);
LobotSerialServoMove(6, 415, 150);
LobotSerialServoMove(7, 480+zlwanyao6, 150);
LobotSerialServoMove(8, 335, 150);
LobotSerialServoMove(9, zw2, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P530 #2 P557 #3 P490 #4 P480 #5 P560 #6 P383 #7 P480 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 530, 150);
LobotSerialServoMove(2, 557, 150);
LobotSerialServoMove(3, 490, 150);
LobotSerialServoMove(4, 480+zlwanyao6, 150);
LobotSerialServoMove(5, 560, 150);
LobotSerialServoMove(6, 383, 150);
LobotSerialServoMove(7, 480+zlwanyao6, 150);
LobotSerialServoMove(8, 320, 150);
LobotSerialServoMove(9, zw2, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P520 #2 P510 #3 P494 #4 P480 #5 P575 #6 P505 #7 P480 #8 P500 #9 P520 #10 P500
LobotSerialServoMove(1, 520, 180);
LobotSerialServoMove(2, 510, 180);
LobotSerialServoMove(3, 494, 180);
LobotSerialServoMove(4, 480+zlwanyao6, 180);
LobotSerialServoMove(5, 575, 180);
LobotSerialServoMove(6, 505, 180);
LobotSerialServoMove(7, 480+zlwanyao6, 180);
LobotSerialServoMove(8, 500, 180);
LobotSerialServoMove(9, 520, 180);
LobotSerialServoMove(10, 500, 180);
delay_ms(185);

// #1 P521 #2 P415 #3 P665 #4 P430 #5 P564 #6 P515 #7 P480 #8 P490 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 150);
LobotSerialServoMove(2, 415, 150);
LobotSerialServoMove(3, 665, 150);
LobotSerialServoMove(4, 480+zlwanyao6, 150);
LobotSerialServoMove(5, 564, 150);
LobotSerialServoMove(6, 515, 150);
LobotSerialServoMove(7, 480+zlwanyao6, 150);
LobotSerialServoMove(8, 490, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P440 #2 P383 #3 P680 #4 P480 #5 P470 #6 P557 #7 P480 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 150);
LobotSerialServoMove(2, 383, 150);
LobotSerialServoMove(3, 680, 150);
LobotSerialServoMove(4, 480+zlwanyao6, 150);
LobotSerialServoMove(5, 470, 150);
LobotSerialServoMove(6, 557, 150);
LobotSerialServoMove(7, 480+zlwanyao6, 150);
LobotSerialServoMove(8, 510, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);
}

void zoulu7(void)
{
	// #1 P425 #2 P505 #3 P500 #4 P480 #5 P480 #6 P510 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 425, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 500, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 480, 200);
LobotSerialServoMove(6, 490, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P436 #2 P515 #3 P510 #4 P450 #5 P479 #6 P370 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 436, 200);
LobotSerialServoMove(2, 515, 200);
LobotSerialServoMove(3, 510, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 479, 200);
LobotSerialServoMove(6, 350, 200);
LobotSerialServoMove(7, 580, 200);
LobotSerialServoMove(8, 425, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P530 #2 P557 #3 P490 #4 P450 #5 P560 #6 P383 #7 P480 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 530, 150);
LobotSerialServoMove(2, 557, 150);
LobotSerialServoMove(3, 490, 150);
LobotSerialServoMove(4, 450, 150);
LobotSerialServoMove(5, 560, 150);
LobotSerialServoMove(6, 383, 150);
LobotSerialServoMove(7, 450, 150);
LobotSerialServoMove(8, 320, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P520 #2 P510 #3 P494 #4 P480 #5 P575 #6 P505 #7 P480 #8 P500 #9 P520 #10 P500
LobotSerialServoMove(1, 520, 200);
LobotSerialServoMove(2, 490, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 575, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 450, 200);
LobotSerialServoMove(8, 500, 200);
LobotSerialServoMove(9, 520, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P521 #2 P370 #3 P575 #4 P580 #5 P564 #6 P515 #7 P480 #8 P490 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 200);
LobotSerialServoMove(2, 350, 200);
LobotSerialServoMove(3, 575, 200);
LobotSerialServoMove(4, 580, 200);
LobotSerialServoMove(5, 564, 200);
LobotSerialServoMove(6, 515, 200);
LobotSerialServoMove(7, 450, 200);
LobotSerialServoMove(8, 490, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P440 #2 P383 #3 P680 #4 P480 #5 P470 #6 P557 #7 P480 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 150);
LobotSerialServoMove(2, 383, 150);
LobotSerialServoMove(3, 680, 150);
LobotSerialServoMove(4, 450, 150);
LobotSerialServoMove(5, 470, 150);
LobotSerialServoMove(6, 557, 150);
LobotSerialServoMove(7, 450, 150);
LobotSerialServoMove(8, 510, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

}

void zoulu8(void)
{
// #1 P425 #2 P505 #3 P500 #4 P420 #5 P480 #6 P450 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 425, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 500, 200);
LobotSerialServoMove(4, 420, 200);
LobotSerialServoMove(5, 480, 200);
LobotSerialServoMove(6, 450, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P436 #2 P515 #3 P510 #4 P450 #5 P479 #6 P350 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 436, 200);
LobotSerialServoMove(2, 515, 200);
LobotSerialServoMove(3, 510, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 479, 200);
LobotSerialServoMove(6, 350, 200);
LobotSerialServoMove(7, 580, 200);
LobotSerialServoMove(8, 425, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P500 #2 P530 #3 P490 #4 P450 #5 P560 #6 P383 #7 P450 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 200);
LobotSerialServoMove(2, 530, 200);
LobotSerialServoMove(3, 490, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 560, 200);
LobotSerialServoMove(6, 383, 200);
LobotSerialServoMove(7, 450, 200);
LobotSerialServoMove(8, 320, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P520 #2 P450 #3 P494 #4 P480 #5 P575 #6 P505 #7 P420 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 520, 200);
LobotSerialServoMove(2, 450, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 575, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 420, 200);
LobotSerialServoMove(8, 500, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P521 #2 P350 #3 P575 #4 P580 #5 P564 #6 P515 #7 P450 #8 P490 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 200);
LobotSerialServoMove(2, 350, 200);
LobotSerialServoMove(3, 575, 200);
LobotSerialServoMove(4, 580, 200);
LobotSerialServoMove(5, 564, 200);
LobotSerialServoMove(6, 515, 200);
LobotSerialServoMove(7, 450, 200);
LobotSerialServoMove(8, 490, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P440 #2 P383 #3 P680 #4 P450 #5 P500 #6 P500 #7 P450 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 200);
LobotSerialServoMove(2, 383, 200);
LobotSerialServoMove(3, 680, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 500, 200);
LobotSerialServoMove(6, 500, 200);
LobotSerialServoMove(7, 450, 200);
LobotSerialServoMove(8, 510, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

}

void youzhuan2(void)
{	
// #1 P425 #2 P505 #3 P500 #4 P480 #5 P480 #6 P510 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 425, 280);
LobotSerialServoMove(2, 505, 280);
LobotSerialServoMove(3, 500, 280);
LobotSerialServoMove(4, 480+zlwanyao6, 280);
LobotSerialServoMove(5, 480, 280);
LobotSerialServoMove(6, 510, 280);
LobotSerialServoMove(7, 480+zlwanyao6, 280);
LobotSerialServoMove(8, 506, 280);
LobotSerialServoMove(9, 500, 280);
LobotSerialServoMove(10, 500, 280);
delay_ms(285);

// #1 P436 #2 P515 #3 P510 #4 P480 #5 P479 #6 P415 #7 P430 #8 P335 #9 P500 #10 P500
LobotSerialServoMove(1, 436, 150);
LobotSerialServoMove(2, 515, 150);
LobotSerialServoMove(3, 510, 150);
LobotSerialServoMove(4, 480+zlwanyao6, 150);
LobotSerialServoMove(5, 479, 150);
LobotSerialServoMove(6, 415, 150);
LobotSerialServoMove(7, 480+zlwanyao6, 150);
LobotSerialServoMove(8, 335, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P530 #2 P557 #3 P490 #4 P480 #5 P560 #6 P383 #7 P480 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 530, 150);
LobotSerialServoMove(2, 557, 150);
LobotSerialServoMove(3, 490, 150);
LobotSerialServoMove(4, 480+zlwanyao6, 150);
LobotSerialServoMove(5, 560, 150);
LobotSerialServoMove(6, 383, 150);
LobotSerialServoMove(7, 480+zlwanyao6, 150);
LobotSerialServoMove(8, 320, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P520 #2 P510 #3 P494 #4 P480 #5 P575 #6 P505 #7 P480 #8 P500 #9 P520 #10 P500
LobotSerialServoMove(1, 520, 180);
LobotSerialServoMove(2, 510, 180);
LobotSerialServoMove(3, 494, 180);
LobotSerialServoMove(4, 480+zlwanyao6, 180);
LobotSerialServoMove(5, 575, 180);
LobotSerialServoMove(6, 505, 180);
LobotSerialServoMove(7, 480+zlwanyao6, 180);
LobotSerialServoMove(8, 500, 180);
LobotSerialServoMove(9, 500, 180);
LobotSerialServoMove(10, 500, 180);
delay_ms(185);

// #1 P521 #2 P415 #3 P665 #4 P430 #5 P564 #6 P515 #7 P480 #8 P490 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 150);
LobotSerialServoMove(2, 415, 150);
LobotSerialServoMove(3, 665, 150);
LobotSerialServoMove(4, 480+zlwanyao6, 150);
LobotSerialServoMove(5, 564, 150);
LobotSerialServoMove(6, 515, 150);
LobotSerialServoMove(7, 480+zlwanyao6, 150);
LobotSerialServoMove(8, 490, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 450, 150);
delay_ms(155);

// #1 P440 #2 P383 #3 P680 #4 P480 #5 P470 #6 P557 #7 P480 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 150);
LobotSerialServoMove(2, 383, 150);
LobotSerialServoMove(3, 680, 150);
LobotSerialServoMove(4, 480+zlwanyao6, 150);
LobotSerialServoMove(5, 470, 150);
LobotSerialServoMove(6, 557, 150);
LobotSerialServoMove(7, 480+zlwanyao6, 150);
LobotSerialServoMove(8, 510, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 450, 150);
delay_ms(155);
}



void zuozhuan5(void)
{
	// #1 P425 #2 P505 #3 P500 #4 P480 #5 P480 #6 P510 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 425, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 500, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 480, 200);
LobotSerialServoMove(6, 490, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P436 #2 P515 #3 P510 #4 P450 #5 P479 #6 P370 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 436, 200);
LobotSerialServoMove(2, 515, 200);
LobotSerialServoMove(3, 510, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 479, 200);
LobotSerialServoMove(6, 350, 200);
LobotSerialServoMove(7, 580, 200);
LobotSerialServoMove(8, 425, 200);
LobotSerialServoMove(9, 540, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P530 #2 P557 #3 P490 #4 P450 #5 P560 #6 P383 #7 P480 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 530, 150);
LobotSerialServoMove(2, 557, 150);
LobotSerialServoMove(3, 490, 150);
LobotSerialServoMove(4, 450, 150);
LobotSerialServoMove(5, 560, 150);
LobotSerialServoMove(6, 383, 150);
LobotSerialServoMove(7, 450, 150);
LobotSerialServoMove(8, 320, 150);
LobotSerialServoMove(9, 540, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P520 #2 P510 #3 P494 #4 P480 #5 P575 #6 P505 #7 P480 #8 P500 #9 P520 #10 P500
LobotSerialServoMove(1, 520, 200);
LobotSerialServoMove(2, 490, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 575, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 450, 200);
LobotSerialServoMove(8, 500, 200);
LobotSerialServoMove(9, 520, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P521 #2 P370 #3 P575 #4 P580 #5 P564 #6 P515 #7 P480 #8 P490 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 200);
LobotSerialServoMove(2, 350, 200);
LobotSerialServoMove(3, 575, 200);
LobotSerialServoMove(4, 580, 200);
LobotSerialServoMove(5, 564, 200);
LobotSerialServoMove(6, 515, 200);
LobotSerialServoMove(7, 450, 200);
LobotSerialServoMove(8, 490, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P440 #2 P383 #3 P680 #4 P480 #5 P470 #6 P557 #7 P480 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 150);
LobotSerialServoMove(2, 383, 150);
LobotSerialServoMove(3, 680, 150);
LobotSerialServoMove(4, 450, 150);
LobotSerialServoMove(5, 470, 150);
LobotSerialServoMove(6, 557, 150);
LobotSerialServoMove(7, 450, 150);
LobotSerialServoMove(8, 510, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

}

void youzhuan3(void)
{
	// #1 P425 #2 P505 #3 P500 #4 P480 #5 P480 #6 P510 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 425, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 500, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 480, 200);
LobotSerialServoMove(6, 490, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P436 #2 P515 #3 P510 #4 P450 #5 P479 #6 P370 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 436, 200);
LobotSerialServoMove(2, 515, 200);
LobotSerialServoMove(3, 510, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 479, 200);
LobotSerialServoMove(6, 350, 200);
LobotSerialServoMove(7, 580, 200);
LobotSerialServoMove(8, 425, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P530 #2 P557 #3 P490 #4 P450 #5 P560 #6 P383 #7 P480 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 530, 150);
LobotSerialServoMove(2, 557, 150);
LobotSerialServoMove(3, 490, 150);
LobotSerialServoMove(4, 450, 150);
LobotSerialServoMove(5, 560, 150);
LobotSerialServoMove(6, 383, 150);
LobotSerialServoMove(7, 450, 150);
LobotSerialServoMove(8, 320, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 500, 150);
delay_ms(155);

// #1 P520 #2 P510 #3 P494 #4 P480 #5 P575 #6 P505 #7 P480 #8 P500 #9 P520 #10 P500
LobotSerialServoMove(1, 520, 200);
LobotSerialServoMove(2, 490, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 575, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 450, 200);
LobotSerialServoMove(8, 500, 200);
LobotSerialServoMove(9, 520, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P521 #2 P370 #3 P575 #4 P580 #5 P564 #6 P515 #7 P480 #8 P490 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 200);
LobotSerialServoMove(2, 350, 200);
LobotSerialServoMove(3, 575, 200);
LobotSerialServoMove(4, 580, 200);
LobotSerialServoMove(5, 564, 200);
LobotSerialServoMove(6, 515, 200);
LobotSerialServoMove(7, 450, 200);
LobotSerialServoMove(8, 490, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 480, 200);
delay_ms(205);

// #1 P440 #2 P383 #3 P680 #4 P480 #5 P470 #6 P557 #7 P480 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 150);
LobotSerialServoMove(2, 383, 150);
LobotSerialServoMove(3, 680, 150);
LobotSerialServoMove(4, 450, 150);
LobotSerialServoMove(5, 470, 150);
LobotSerialServoMove(6, 557, 150);
LobotSerialServoMove(7, 450, 150);
LobotSerialServoMove(8, 510, 150);
LobotSerialServoMove(9, 500, 150);
LobotSerialServoMove(10, 480, 150);
delay_ms(155);

}

void zoulu9(void)
{
// #1 P420 #2 P505 #3 P500 #4 P450 #5 P420 #6 P520 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 420, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 500, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 420, 200);
LobotSerialServoMove(6, 520, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P436 #2 P515 #3 P510 #4 P470 #5 P479 #6 P380 #7 P580 #8 P425 #9 P550 #10 P500
LobotSerialServoMove(1, 436, 300);
LobotSerialServoMove(2, 515, 300);
LobotSerialServoMove(3, 510, 300);
LobotSerialServoMove(4, 470, 300);
LobotSerialServoMove(5, 479, 300);
LobotSerialServoMove(6, 380, 300);
LobotSerialServoMove(7, 580, 300);
LobotSerialServoMove(8, 425, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P570 #2 P530 #3 P490 #4 P470 #5 P560 #6 P383 #7 P480 #8 P320 #9 P550 #10 P500
LobotSerialServoMove(1, 570, 200);
LobotSerialServoMove(2, 530, 200);
LobotSerialServoMove(3, 490, 200);
LobotSerialServoMove(4, 470, 200);
LobotSerialServoMove(5, 560, 200);
LobotSerialServoMove(6, 383, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 320, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P580 #2 P520 #3 P494 #4 P480 #5 P580 #6 P505 #7 P520 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 580, 200);
LobotSerialServoMove(2, 520, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 580, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 520, 200);
LobotSerialServoMove(8, 500, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P521 #2 P380 #3 P575 #4 P580 #5 P564 #6 P515 #7 P470 #8 P490 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 300);
LobotSerialServoMove(2, 380, 300);
LobotSerialServoMove(3, 575, 300);
LobotSerialServoMove(4, 580, 300);
LobotSerialServoMove(5, 564, 300);
LobotSerialServoMove(6, 515, 300);
LobotSerialServoMove(7, 470, 300);
LobotSerialServoMove(8, 490, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P440 #2 P383 #3 P680 #4 P480 #5 P430 #6 P530 #7 P470 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 200);
LobotSerialServoMove(2, 383, 200);
LobotSerialServoMove(3, 680, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 430, 200);
LobotSerialServoMove(6, 530, 200);
LobotSerialServoMove(7, 470, 200);
LobotSerialServoMove(8, 510, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

}

void zuozhuan6(void)
{
// #1 P420 #2 P505 #3 P500 #4 P450 #5 P420 #6 P520 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 420, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 500, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 420, 200);
LobotSerialServoMove(6, 520, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P436 #2 P515 #3 P510 #4 P470 #5 P479 #6 P380 #7 P580 #8 P425 #9 P550 #10 P500
LobotSerialServoMove(1, 436, 300);
LobotSerialServoMove(2, 515, 300);
LobotSerialServoMove(3, 510, 300);
LobotSerialServoMove(4, 470, 300);
LobotSerialServoMove(5, 479, 300);
LobotSerialServoMove(6, 380, 300);
LobotSerialServoMove(7, 580, 300);
LobotSerialServoMove(8, 425, 300);
LobotSerialServoMove(9, 570, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P570 #2 P530 #3 P490 #4 P470 #5 P560 #6 P383 #7 P480 #8 P320 #9 P550 #10 P500
LobotSerialServoMove(1, 570, 200);
LobotSerialServoMove(2, 530, 200);
LobotSerialServoMove(3, 490, 200);
LobotSerialServoMove(4, 470, 200);
LobotSerialServoMove(5, 560, 200);
LobotSerialServoMove(6, 383, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 320, 200);
LobotSerialServoMove(9, 570, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P580 #2 P520 #3 P494 #4 P480 #5 P580 #6 P505 #7 P520 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 580, 200);
LobotSerialServoMove(2, 520, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 580, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 520, 200);
LobotSerialServoMove(8, 500, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P521 #2 P380 #3 P575 #4 P580 #5 P564 #6 P515 #7 P470 #8 P490 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 300);
LobotSerialServoMove(2, 380, 300);
LobotSerialServoMove(3, 575, 300);
LobotSerialServoMove(4, 580, 300);
LobotSerialServoMove(5, 564, 300);
LobotSerialServoMove(6, 515, 300);
LobotSerialServoMove(7, 470, 300);
LobotSerialServoMove(8, 490, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P440 #2 P383 #3 P680 #4 P480 #5 P430 #6 P530 #7 P470 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 200);
LobotSerialServoMove(2, 383, 200);
LobotSerialServoMove(3, 680, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 430, 200);
LobotSerialServoMove(6, 530, 200);
LobotSerialServoMove(7, 470, 200);
LobotSerialServoMove(8, 510, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

}
void youzhuan4(void)
{
	// #1 P420 #2 P505 #3 P500 #4 P450 #5 P420 #6 P520 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 420, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 500, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 420, 200);
LobotSerialServoMove(6, 520, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P436 #2 P515 #3 P510 #4 P470 #5 P479 #6 P380 #7 P580 #8 P425 #9 P550 #10 P500
LobotSerialServoMove(1, 436, 300);
LobotSerialServoMove(2, 515, 300);
LobotSerialServoMove(3, 510, 300);
LobotSerialServoMove(4, 470, 300);
LobotSerialServoMove(5, 479, 300);
LobotSerialServoMove(6, 380, 300);
LobotSerialServoMove(7, 580, 300);
LobotSerialServoMove(8, 425, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P570 #2 P530 #3 P490 #4 P470 #5 P560 #6 P383 #7 P480 #8 P320 #9 P550 #10 P500
LobotSerialServoMove(1, 570, 200);
LobotSerialServoMove(2, 530, 200);
LobotSerialServoMove(3, 490, 200);
LobotSerialServoMove(4, 470, 200);
LobotSerialServoMove(5, 560, 200);
LobotSerialServoMove(6, 383, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 320, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P580 #2 P520 #3 P494 #4 P480 #5 P580 #6 P505 #7 P520 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 580, 200);
LobotSerialServoMove(2, 520, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 580, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 520, 200);
LobotSerialServoMove(8, 500, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P521 #2 P380 #3 P575 #4 P580 #5 P564 #6 P515 #7 P470 #8 P490 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 300);
LobotSerialServoMove(2, 380, 300);
LobotSerialServoMove(3, 575, 300);
LobotSerialServoMove(4, 580, 300);
LobotSerialServoMove(5, 564, 300);
LobotSerialServoMove(6, 515, 300);
LobotSerialServoMove(7, 470, 300);
LobotSerialServoMove(8, 490, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 420, 300);
delay_ms(305);

// #1 P440 #2 P383 #3 P680 #4 P480 #5 P430 #6 P530 #7 P470 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 200);
LobotSerialServoMove(2, 383, 200);
LobotSerialServoMove(3, 680, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 430, 200);
LobotSerialServoMove(6, 530, 200);
LobotSerialServoMove(7, 470, 200);
LobotSerialServoMove(8, 510, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 420, 200);
delay_ms(205);

}

void zoulu10(void)
{
// #1 P420 #2 P505 #3 P500 #4 P450 #5 P420 #6 P520 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 420, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 500, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 420, 200);
LobotSerialServoMove(6, 520, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P436 #2 P515 #3 P510 #4 P470 #5 P479 #6 P380 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 436, 300);
LobotSerialServoMove(2, 515, 300);
LobotSerialServoMove(3, 510, 300);
LobotSerialServoMove(4, 470, 300);
LobotSerialServoMove(5, 479, 300);
LobotSerialServoMove(6, 380, 300);
LobotSerialServoMove(7, 580, 300);
LobotSerialServoMove(8, 425, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P570 #2 P530 #3 P490 #4 P470 #5 P560 #6 P383 #7 P480 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 570, 200);
LobotSerialServoMove(2, 530, 200);
LobotSerialServoMove(3, 490, 200);
LobotSerialServoMove(4, 470, 200);
LobotSerialServoMove(5, 560, 200);
LobotSerialServoMove(6, 383, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 320, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P580 #2 P520 #3 P494 #4 P480 #5 P580 #6 P505 #7 P480 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 580, 200);
LobotSerialServoMove(2, 520, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 580, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 500, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P521 #2 P380 #3 P575 #4 P580 #5 P564 #6 P515 #7 P470 #8 P490 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 300);
LobotSerialServoMove(2, 380, 300);
LobotSerialServoMove(3, 575, 300);
LobotSerialServoMove(4, 580, 300);
LobotSerialServoMove(5, 564, 300);
LobotSerialServoMove(6, 515, 300);
LobotSerialServoMove(7, 470, 300);
LobotSerialServoMove(8, 490, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P440 #2 P383 #3 P680 #4 P450 #5 P430 #6 P530 #7 P470 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 200);
LobotSerialServoMove(2, 383, 200);
LobotSerialServoMove(3, 680, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 430, 200);
LobotSerialServoMove(6, 530, 200);
LobotSerialServoMove(7, 470, 200);
LobotSerialServoMove(8, 510, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

}

void zuozhuan7(void)
{
// #1 P420 #2 P505 #3 P500 #4 P450 #5 P420 #6 P520 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 420, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 500, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 420, 200);
LobotSerialServoMove(6, 520, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 515, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P436 #2 P515 #3 P510 #4 P470 #5 P479 #6 P380 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 436, 300);
LobotSerialServoMove(2, 515, 300);
LobotSerialServoMove(3, 510, 300);
LobotSerialServoMove(4, 470, 300);
LobotSerialServoMove(5, 479, 300);
LobotSerialServoMove(6, 380, 300);
LobotSerialServoMove(7, 580, 300);
LobotSerialServoMove(8, 425, 300);
LobotSerialServoMove(9, 530, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P570 #2 P530 #3 P490 #4 P470 #5 P560 #6 P383 #7 P480 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 570, 200);
LobotSerialServoMove(2, 530, 200);
LobotSerialServoMove(3, 490, 200);
LobotSerialServoMove(4, 470, 200);
LobotSerialServoMove(5, 560, 200);
LobotSerialServoMove(6, 383, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 320, 200);
LobotSerialServoMove(9, 530, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P580 #2 P520 #3 P494 #4 P480 #5 P580 #6 P505 #7 P480 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 580, 200);
LobotSerialServoMove(2, 520, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 580, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 500, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P521 #2 P380 #3 P575 #4 P580 #5 P564 #6 P515 #7 P470 #8 P490 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 300);
LobotSerialServoMove(2, 380, 300);
LobotSerialServoMove(3, 575, 300);
LobotSerialServoMove(4, 580, 300);
LobotSerialServoMove(5, 564, 300);
LobotSerialServoMove(6, 515, 300);
LobotSerialServoMove(7, 470, 300);
LobotSerialServoMove(8, 490, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P440 #2 P383 #3 P680 #4 P450 #5 P430 #6 P530 #7 P470 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 200);
LobotSerialServoMove(2, 383, 200);
LobotSerialServoMove(3, 680, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 430, 200);
LobotSerialServoMove(6, 530, 200);
LobotSerialServoMove(7, 470, 200);
LobotSerialServoMove(8, 510, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

}

void youzhuan5(void)
{
// #1 P420 #2 P505 #3 P500 #4 P450 #5 P420 #6 P520 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 420, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 500, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 420, 200);
LobotSerialServoMove(6, 520, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P436 #2 P515 #3 P510 #4 P470 #5 P479 #6 P380 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 436, 300);
LobotSerialServoMove(2, 515, 300);
LobotSerialServoMove(3, 510, 300);
LobotSerialServoMove(4, 470, 300);
LobotSerialServoMove(5, 479, 300);
LobotSerialServoMove(6, 380, 300);
LobotSerialServoMove(7, 580, 300);
LobotSerialServoMove(8, 425, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P570 #2 P530 #3 P490 #4 P470 #5 P560 #6 P383 #7 P480 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 570, 200);
LobotSerialServoMove(2, 530, 200);
LobotSerialServoMove(3, 490, 200);
LobotSerialServoMove(4, 470, 200);
LobotSerialServoMove(5, 560, 200);
LobotSerialServoMove(6, 383, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 320, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P580 #2 P520 #3 P494 #4 P480 #5 P580 #6 P505 #7 P480 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 580, 200);
LobotSerialServoMove(2, 520, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 580, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 500, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 485, 200);
delay_ms(205);

// #1 P521 #2 P380 #3 P575 #4 P580 #5 P564 #6 P515 #7 P470 #8 P490 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 300);
LobotSerialServoMove(2, 380, 300);
LobotSerialServoMove(3, 575, 300);
LobotSerialServoMove(4, 580, 300);
LobotSerialServoMove(5, 564, 300);
LobotSerialServoMove(6, 515, 300);
LobotSerialServoMove(7, 470, 300);
LobotSerialServoMove(8, 490, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 470, 300);
delay_ms(305);

// #1 P440 #2 P383 #3 P680 #4 P450 #5 P430 #6 P530 #7 P470 #8 P510 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 200);
LobotSerialServoMove(2, 383, 200);
LobotSerialServoMove(3, 680, 200);
LobotSerialServoMove(4, 450, 200);
LobotSerialServoMove(5, 430, 200);
LobotSerialServoMove(6, 530, 200);
LobotSerialServoMove(7, 470, 200);
LobotSerialServoMove(8, 510, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 470, 200);
delay_ms(205);

}

void qibu1(void)
{
	  LobotSerialServoMove(1, 420, 1000);
    LobotSerialServoMove(2, 505, 1000);
    LobotSerialServoMove(3, 500, 1000);
    LobotSerialServoMove(4, 450, 1000);
    LobotSerialServoMove(5, 420, 1000);
    LobotSerialServoMove(6, 520, 1000);
    LobotSerialServoMove(7, 480, 1000);
    LobotSerialServoMove(8, 506, 1000);
    LobotSerialServoMove(9, 500, 1000);
    LobotSerialServoMove(10, 500, 1000);
    delay_ms(1005);
}


void yuezhang(void)
{
// #1 P420 #2 P505 #3 P500 #4 P450 #5 P420 #6 P520 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 420, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 500, 500);
LobotSerialServoMove(4, 450, 500);
LobotSerialServoMove(5, 420, 500);
LobotSerialServoMove(6, 520, 500);
LobotSerialServoMove(7, 480, 500);
LobotSerialServoMove(8, 506, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500, 500);
delay_ms(505);

// #1 P420 #2 P505 #3 P500 #4 P450 #5 P495 #6 P195 #7 P645 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 420, 1000);
LobotSerialServoMove(2, 505, 1000);
LobotSerialServoMove(3, 500, 1000);
LobotSerialServoMove(4, 450, 1000);
LobotSerialServoMove(5, 495, 1000);
LobotSerialServoMove(6, 195, 1000);
LobotSerialServoMove(7, 645, 1000);
LobotSerialServoMove(8, 506, 1000);
LobotSerialServoMove(9, 500, 1000);
LobotSerialServoMove(10, 500, 1000);
delay_ms(1005);

// #1 P420 #2 P505 #3 P500 #4 P450 #5 P495 #6 P195 #7 P645 #8 P1000 #9 P500 #10 P500
LobotSerialServoMove(1, 420, 1000);
LobotSerialServoMove(2, 505, 1000);
LobotSerialServoMove(3, 500, 1000);
LobotSerialServoMove(4, 450, 1000);
LobotSerialServoMove(5, 495, 1000);
LobotSerialServoMove(6, 195, 1000);
LobotSerialServoMove(7, 645, 1000);
LobotSerialServoMove(8, 1000, 1000);
LobotSerialServoMove(9, 500, 1000);
LobotSerialServoMove(10, 500, 1000);
delay_ms(1005);

// #1 P420 #2 P505 #3 P500 #4 P340 #5 P495 #6 P195 #7 P835 #8 P475 #9 P500 #10 P500
LobotSerialServoMove(1, 420, 1000);
LobotSerialServoMove(2, 505, 1000);
LobotSerialServoMove(3, 500, 1000);
LobotSerialServoMove(4, 340, 1000);
LobotSerialServoMove(5, 495, 1000);
LobotSerialServoMove(6, 195, 1000);
LobotSerialServoMove(7, 835, 1000);
LobotSerialServoMove(8, 475, 1000);
LobotSerialServoMove(9, 500, 1000);
LobotSerialServoMove(10, 500, 1000);
delay_ms(1005);

// #1 P478 #2 P698 #3 P424 #4 P384 #5 P508 #6 P170 #7 P735 #8 P424 #9 P498 #10 P501
LobotSerialServoMove(1, 478, 1000);
LobotSerialServoMove(2, 698, 1000);
LobotSerialServoMove(3, 424, 1000);
LobotSerialServoMove(4, 384, 1000);
LobotSerialServoMove(5, 508, 1000);
LobotSerialServoMove(6, 170, 1000);
LobotSerialServoMove(7, 735, 1000);
LobotSerialServoMove(8, 424, 1000);
LobotSerialServoMove(9, 498, 1000);
LobotSerialServoMove(10, 501, 1000);
delay_ms(1005);

// #1 P478 #2 P698 #3 P424 #4 P384 #5 P508 #6 P170 #7 P735 #8 P424 #9 P498 #10 P501
LobotSerialServoMove(1, 478, 1000);
LobotSerialServoMove(2, 698, 1000);
LobotSerialServoMove(3, 424, 1000);
LobotSerialServoMove(4, 384, 1000);
LobotSerialServoMove(5, 508, 1000);
LobotSerialServoMove(6, 170, 1000);
LobotSerialServoMove(7, 735, 1000);
LobotSerialServoMove(8, 424, 1000);
LobotSerialServoMove(9, 498, 1000);
LobotSerialServoMove(10, 501, 1000);
delay_ms(1005);

// #1 P478 #2 P590 #3 P424 #4 P470 #5 P490 #6 P265 #7 P715 #8 P424 #9 P498 #10 P420
LobotSerialServoMove(1, 478, 1000);
LobotSerialServoMove(2, 590, 1000);
LobotSerialServoMove(3, 424, 1000);
LobotSerialServoMove(4, 470, 1000);
LobotSerialServoMove(5, 490, 1000);
LobotSerialServoMove(6, 265, 1000);
LobotSerialServoMove(7, 715, 1000);
LobotSerialServoMove(8, 424, 1000);
LobotSerialServoMove(9, 498, 1000);
LobotSerialServoMove(10, 420, 1000);
delay_ms(1005);

// #1 P478 #2 P500 #3 P424 #4 P495 #5 P505 #6 P230 #7 P700 #8 P424 #9 P498 #10 P501
LobotSerialServoMove(1, 478, 1000);
LobotSerialServoMove(2, 500, 1000);
LobotSerialServoMove(3, 424, 1000);
LobotSerialServoMove(4, 495, 1000);
LobotSerialServoMove(5, 505, 1000);
LobotSerialServoMove(6, 230, 1000);
LobotSerialServoMove(7, 700, 1000);
LobotSerialServoMove(8, 424, 1000);
LobotSerialServoMove(9, 498, 1000);
LobotSerialServoMove(10, 501, 1000);
delay_ms(1005);

// #1 P478 #2 P500 #3 P424 #4 P495 #5 P505 #6 P230 #7 P700 #8 P424 #9 P498 #10 P420
LobotSerialServoMove(1, 478, 1000);
LobotSerialServoMove(2, 500, 1000);
LobotSerialServoMove(3, 424, 1000);
LobotSerialServoMove(4, 495, 1000);
LobotSerialServoMove(5, 505, 1000);
LobotSerialServoMove(6, 230, 1000);
LobotSerialServoMove(7, 700, 1000);
LobotSerialServoMove(8, 424, 1000);
LobotSerialServoMove(9, 498, 1000);
LobotSerialServoMove(10, 420, 1000);
delay_ms(1005);

// #1 P478 #2 P335 #3 P424 #4 P500 #5 P530 #6 P260 #7 P700 #8 P424 #9 P498 #10 P420
LobotSerialServoMove(1, 478, 1000);
LobotSerialServoMove(2, 335, 1000);
LobotSerialServoMove(3, 424, 1000);
LobotSerialServoMove(4, 500, 1000);
LobotSerialServoMove(5, 530, 1000);
LobotSerialServoMove(6, 260, 1000);
LobotSerialServoMove(7, 700, 1000);
LobotSerialServoMove(8, 424, 1000);
LobotSerialServoMove(9, 498, 1000);
LobotSerialServoMove(10, 420, 1000);
delay_ms(1005);

// #1 P478 #2 P335 #3 P424 #4 P500 #5 P560 #6 P260 #7 P700 #8 P424 #9 P498 #10 P420
LobotSerialServoMove(1, 478, 1000);
LobotSerialServoMove(2, 335, 1000);
LobotSerialServoMove(3, 424, 1000);
LobotSerialServoMove(4, 500, 1000);
LobotSerialServoMove(5, 560, 1000);
LobotSerialServoMove(6, 260, 1000);
LobotSerialServoMove(7, 700, 1000);
LobotSerialServoMove(8, 424, 1000);
LobotSerialServoMove(9, 498, 1000);
LobotSerialServoMove(10, 420, 1000);
delay_ms(1005);

// #1 P476 #2 P448 #3 P436 #4 P622 #5 P615 #6 P312 #7 P830 #8 P366 #9 P433 #10 P440
LobotSerialServoMove(1, 476, 1000);
LobotSerialServoMove(2, 448, 1000);
LobotSerialServoMove(3, 436, 1000);
LobotSerialServoMove(4, 622, 1000);
LobotSerialServoMove(5, 615, 1000);
LobotSerialServoMove(6, 312, 1000);
LobotSerialServoMove(7, 830, 1000);
LobotSerialServoMove(8, 366, 1000);
LobotSerialServoMove(9, 433, 1000);
LobotSerialServoMove(10, 440, 1000);
delay_ms(1005);

// #1 P476 #2 P448 #3 P436 #4 P622 #5 P610 #6 P312 #7 P830 #8 P366 #9 P433 #10 P440
LobotSerialServoMove(1, 476, 1000);
LobotSerialServoMove(2, 448, 1000);
LobotSerialServoMove(3, 436, 1000);
LobotSerialServoMove(4, 622, 1000);
LobotSerialServoMove(5, 610, 1000);
LobotSerialServoMove(6, 312, 1000);
LobotSerialServoMove(7, 830, 1000);
LobotSerialServoMove(8, 366, 1000);
LobotSerialServoMove(9, 433, 1000);
LobotSerialServoMove(10, 440, 1000);
delay_ms(1005);

// #1 P476 #2 P0 #3 P436 #4 P622 #5 P610 #6 P312 #7 P830 #8 P366 #9 P433 #10 P440
LobotSerialServoMove(1, 476, 1000);
LobotSerialServoMove(2, 0, 1000);
LobotSerialServoMove(3, 436, 1000);
LobotSerialServoMove(4, 622, 1000);
LobotSerialServoMove(5, 610, 1000);
LobotSerialServoMove(6, 312, 1000);
LobotSerialServoMove(7, 830, 1000);
LobotSerialServoMove(8, 366, 1000);
LobotSerialServoMove(9, 433, 1000);
LobotSerialServoMove(10, 440, 1000);
delay_ms(1005);

// #1 P476 #2 P0 #3 P436 #4 P622 #5 P595 #6 P340 #7 P530 #8 P366 #9 P433 #10 P440
LobotSerialServoMove(1, 476, 1000);
LobotSerialServoMove(2, 0, 1000);
LobotSerialServoMove(3, 436, 1000);
LobotSerialServoMove(4, 622, 1000);
LobotSerialServoMove(5, 595, 1000);
LobotSerialServoMove(6, 340, 1000);
LobotSerialServoMove(7, 530, 1000);
LobotSerialServoMove(8, 366, 1000);
LobotSerialServoMove(9, 433, 1000);
LobotSerialServoMove(10, 440, 1000);
delay_ms(1005);

// #1 P476 #2 P0 #3 P565 #4 P700 #5 P595 #6 P340 #7 P530 #8 P366 #9 P433 #10 P440
LobotSerialServoMove(1, 476, 500);
LobotSerialServoMove(2, 0, 500);
LobotSerialServoMove(3, 565, 500);
LobotSerialServoMove(4, 700, 500);
LobotSerialServoMove(5, 595, 500);
LobotSerialServoMove(6, 340, 500);
LobotSerialServoMove(7, 530, 500);
LobotSerialServoMove(8, 366, 500);
LobotSerialServoMove(9, 433, 500);
LobotSerialServoMove(10, 440, 500);
delay_ms(505);

// #1 P476 #2 P465 #3 P436 #4 P622 #5 P595 #6 P340 #7 P530 #8 P366 #9 P433 #10 P440
LobotSerialServoMove(1, 476, 500);
LobotSerialServoMove(2, 465, 500);
LobotSerialServoMove(3, 436, 500);
LobotSerialServoMove(4, 622, 500);
LobotSerialServoMove(5, 595, 500);
LobotSerialServoMove(6, 340, 500);
LobotSerialServoMove(7, 530, 500);
LobotSerialServoMove(8, 366, 500);
LobotSerialServoMove(9, 433, 500);
LobotSerialServoMove(10, 440, 500);
delay_ms(505);

// #1 P500 #2 P500 #3 P500 #4 P500 #5 P500 #6 P500 #7 P500 #8 P500 #9 P500 #10 P500
LobotSerialServoMove(1, 500, 1000);
LobotSerialServoMove(2, 500, 1000);
LobotSerialServoMove(3, 500, 1000);
LobotSerialServoMove(4, 500, 1000);
LobotSerialServoMove(5, 500, 1000);
LobotSerialServoMove(6, 500, 1000);
LobotSerialServoMove(7, 500, 1000);
LobotSerialServoMove(8, 500, 1000);
LobotSerialServoMove(9, 500, 1000);
LobotSerialServoMove(10, 500, 1000);
delay_ms(1005);

}


void zoulu11(void)
{
// #1 P430 #2 P505 #3 P530 #4 P460 #5 P420 #6 P535 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 430, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 530, 200);
LobotSerialServoMove(4, 460, 200);
LobotSerialServoMove(5, 420, 200);
LobotSerialServoMove(6, 535, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P466 #2 P515 #3 P470 #4 P500 #5 P449 #6 P380 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 466, 300);
LobotSerialServoMove(2, 515, 300);
LobotSerialServoMove(3, 470, 300);
LobotSerialServoMove(4, 500, 300);
LobotSerialServoMove(5, 449, 300);
LobotSerialServoMove(6, 380, 300);
LobotSerialServoMove(7, 580, 300);
LobotSerialServoMove(8, 425, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P570 #2 P490 #3 P530 #4 P470 #5 P560 #6 P383 #7 P490 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 570, 200);
LobotSerialServoMove(2, 490, 200);
LobotSerialServoMove(3, 530, 200);
LobotSerialServoMove(4, 470, 200);
LobotSerialServoMove(5, 560, 200);
LobotSerialServoMove(6, 383, 200);
LobotSerialServoMove(7, 490, 200);
LobotSerialServoMove(8, 320, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P580 #2 P505 #3 P494 #4 P480 #5 P570 #6 P505 #7 P480 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 580, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 570, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 470, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P521 #2 P350 #3 P575 #4 P580 #5 P534 #6 P515 #7 P520 #8 P530 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 300);
LobotSerialServoMove(2, 350, 300);
LobotSerialServoMove(3, 575, 300);
LobotSerialServoMove(4, 580, 300);
LobotSerialServoMove(5, 534, 300);
LobotSerialServoMove(6, 515, 300);
LobotSerialServoMove(7, 520, 300);
LobotSerialServoMove(8, 530, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P440 #2 P383 #3 P680 #4 P470 #5 P430 #6 P510 #7 P470 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 200);
LobotSerialServoMove(2, 383, 200);
LobotSerialServoMove(3, 680, 200);
LobotSerialServoMove(4, 470, 200);
LobotSerialServoMove(5, 430, 200);
LobotSerialServoMove(6, 510, 200);
LobotSerialServoMove(7, 470, 200);
LobotSerialServoMove(8, 470, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

}


void zuozhuan8(void)
{
// #1 P430 #2 P505 #3 P530 #4 P460 #5 P420 #6 P535 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 430, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 530, 200);
LobotSerialServoMove(4, 460, 200);
LobotSerialServoMove(5, 420, 200);
LobotSerialServoMove(6, 535, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 530, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P466 #2 P515 #3 P470 #4 P500 #5 P449 #6 P380 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 466, 300);
LobotSerialServoMove(2, 515, 300);
LobotSerialServoMove(3, 470, 300);
LobotSerialServoMove(4, 500, 300);
LobotSerialServoMove(5, 449, 300);
LobotSerialServoMove(6, 380, 300);
LobotSerialServoMove(7, 580, 300);
LobotSerialServoMove(8, 425, 300);
LobotSerialServoMove(9, 555, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P570 #2 P490 #3 P530 #4 P470 #5 P560 #6 P383 #7 P490 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 570, 200);
LobotSerialServoMove(2, 490, 200);
LobotSerialServoMove(3, 530, 200);
LobotSerialServoMove(4, 470, 200);
LobotSerialServoMove(5, 560, 200);
LobotSerialServoMove(6, 383, 200);
LobotSerialServoMove(7, 490, 200);
LobotSerialServoMove(8, 320, 200);
LobotSerialServoMove(9, 555, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P580 #2 P505 #3 P494 #4 P480 #5 P570 #6 P505 #7 P480 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 580, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 570, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 470, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P521 #2 P350 #3 P575 #4 P580 #5 P534 #6 P515 #7 P520 #8 P530 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 300);
LobotSerialServoMove(2, 350, 300);
LobotSerialServoMove(3, 575, 300);
LobotSerialServoMove(4, 580, 300);
LobotSerialServoMove(5, 534, 300);
LobotSerialServoMove(6, 515, 300);
LobotSerialServoMove(7, 520, 300);
LobotSerialServoMove(8, 530, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P440 #2 P383 #3 P680 #4 P470 #5 P430 #6 P510 #7 P470 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 200);
LobotSerialServoMove(2, 383, 200);
LobotSerialServoMove(3, 680, 200);
LobotSerialServoMove(4, 470, 200);
LobotSerialServoMove(5, 430, 200);
LobotSerialServoMove(6, 510, 200);
LobotSerialServoMove(7, 470, 200);
LobotSerialServoMove(8, 470, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

}

void youzhuan6(void)
{
// #1 P430 #2 P505 #3 P530 #4 P460 #5 P420 #6 P535 #7 P480 #8 P506 #9 P500 #10 P500
LobotSerialServoMove(1, 430, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 530, 200);
LobotSerialServoMove(4, 460, 200);
LobotSerialServoMove(5, 420, 200);
LobotSerialServoMove(6, 535, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 506, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P466 #2 P515 #3 P470 #4 P500 #5 P449 #6 P380 #7 P580 #8 P425 #9 P500 #10 P500
LobotSerialServoMove(1, 466, 300);
LobotSerialServoMove(2, 515, 300);
LobotSerialServoMove(3, 470, 300);
LobotSerialServoMove(4, 500, 300);
LobotSerialServoMove(5, 449, 300);
LobotSerialServoMove(6, 380, 300);
LobotSerialServoMove(7, 580, 300);
LobotSerialServoMove(8, 425, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 500, 300);
delay_ms(305);

// #1 P570 #2 P490 #3 P530 #4 P470 #5 P560 #6 P383 #7 P490 #8 P320 #9 P500 #10 P500
LobotSerialServoMove(1, 570, 200);
LobotSerialServoMove(2, 490, 200);
LobotSerialServoMove(3, 530, 200);
LobotSerialServoMove(4, 470, 200);
LobotSerialServoMove(5, 560, 200);
LobotSerialServoMove(6, 383, 200);
LobotSerialServoMove(7, 490, 200);
LobotSerialServoMove(8, 320, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 500, 200);
delay_ms(205);

// #1 P580 #2 P505 #3 P494 #4 P480 #5 P570 #6 P505 #7 P480 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 580, 200);
LobotSerialServoMove(2, 505, 200);
LobotSerialServoMove(3, 494, 200);
LobotSerialServoMove(4, 480, 200);
LobotSerialServoMove(5, 570, 200);
LobotSerialServoMove(6, 505, 200);
LobotSerialServoMove(7, 480, 200);
LobotSerialServoMove(8, 470, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 470, 200);
delay_ms(205);

// #1 P521 #2 P350 #3 P575 #4 P580 #5 P534 #6 P515 #7 P520 #8 P530 #9 P500 #10 P500
LobotSerialServoMove(1, 521, 300);
LobotSerialServoMove(2, 350, 300);
LobotSerialServoMove(3, 575, 300);
LobotSerialServoMove(4, 580, 300);
LobotSerialServoMove(5, 534, 300);
LobotSerialServoMove(6, 515, 300);
LobotSerialServoMove(7, 520, 300);
LobotSerialServoMove(8, 530, 300);
LobotSerialServoMove(9, 500, 300);
LobotSerialServoMove(10, 440, 300);
delay_ms(305);

// #1 P440 #2 P383 #3 P680 #4 P470 #5 P430 #6 P510 #7 P470 #8 P470 #9 P500 #10 P500
LobotSerialServoMove(1, 440, 200);
LobotSerialServoMove(2, 383, 200);
LobotSerialServoMove(3, 680, 200);
LobotSerialServoMove(4, 470, 200);
LobotSerialServoMove(5, 430, 200);
LobotSerialServoMove(6, 510, 200);
LobotSerialServoMove(7, 470, 200);
LobotSerialServoMove(8, 470, 200);
LobotSerialServoMove(9, 500, 200);
LobotSerialServoMove(10, 440, 200);
delay_ms(205);

}

void qibu2(void)
{
	LobotSerialServoMove(1, 430, 500);
LobotSerialServoMove(2, 505, 500);
LobotSerialServoMove(3, 530, 500);
LobotSerialServoMove(4, 460, 500);
LobotSerialServoMove(5, 420, 500);
LobotSerialServoMove(6, 535, 500);
LobotSerialServoMove(7, 480, 500);
LobotSerialServoMove(8, 506, 500);
LobotSerialServoMove(9, 500, 500);
LobotSerialServoMove(10, 500, 500);
servo_angle1(90);
servo_angle2(90);
servo_angle3(90);
servo_angle4(90);
servo_angle5(90);
delay_ms(505);
}


