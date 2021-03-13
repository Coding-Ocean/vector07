#include"libOne.h"
void gmain(){
    window(1000, 1000);
    while (notQuit){
        //�x�N�g��
        float vx = (int)mathMouseX;
        float vy = (int)mathMouseY;
        //�x�N�g���̑傫��
        float mag = sqrt(vx * vx + vy * vy);
        //���K���x�N�g��
        float nvx = vx / mag;
        float nvy = vy / mag;
        //�N���A���č��W��`��
        clear(200);
        mathAxis(5.1f);
        //���̃x�N�g����`��
        strokeWeight(5);
        stroke(0);
        mathArrow(0, 0, vx, vy);
        mathLine(0, 0, vx, 0);
        mathLine(vx, 0, vx, vy);
        //���K�������x�N�g����`��
        stroke(255, 0, 0);
        mathArrow(0, 0, nvx, nvy);
        mathLine(0, 0, nvx, 0);
        mathLine(nvx, 0, nvx, nvy);
        //�e�L�X�g�Ńf�[�^��`��
        textSize(50);
        text((let)"vec(" + vx + "," + vy + ")", 0, 50);
        text((let)"mag:" + mag, 0, 100);
        text((let)"nvec(" + nvx + "," + nvy + ")", 0, 150);
        mag = sqrt(nvx * nvx + nvy * nvy);
        text((let)"nmag:" + mag, 0, 200);
    }
}
