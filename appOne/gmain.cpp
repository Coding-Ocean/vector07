#include"libOne.h"
void gmain(){
    window(1000, 1000);
    while (notQuit){
        //ベクトル
        float vx = (int)mathMouseX;
        float vy = (int)mathMouseY;
        //ベクトルの大きさ
        float mag = sqrt(vx * vx + vy * vy);
        //正規化ベクトル
        float nvx = vx / mag;
        float nvy = vy / mag;
        //クリアして座標を描画
        clear(200);
        mathAxis(5.1f);
        //元のベクトルを描画
        strokeWeight(5);
        stroke(0);
        mathArrow(0, 0, vx, vy);
        mathLine(0, 0, vx, 0);
        mathLine(vx, 0, vx, vy);
        //正規化したベクトルを描画
        stroke(255, 0, 0);
        mathArrow(0, 0, nvx, nvy);
        mathLine(0, 0, nvx, 0);
        mathLine(nvx, 0, nvx, nvy);
        //テキストでデータを描画
        textSize(50);
        text((let)"vec(" + vx + "," + vy + ")", 0, 50);
        text((let)"mag:" + mag, 0, 100);
        text((let)"nvec(" + nvx + "," + nvy + ")", 0, 150);
        mag = sqrt(nvx * nvx + nvy * nvy);
        text((let)"nmag:" + mag, 0, 200);
    }
}
