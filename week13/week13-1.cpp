///week13-1.cpp聖誕倒數
int main() {
    char c;//字母對應方向
    int d;//數字,要轉動幾格
    int now=50;//一開始的密碼鎖
    int ans=0;//轉動時有幾次停在0的地方(通關密碼)
    while(cin>>c>>d){//一直讀資料讀字母讀數字
        if(c=='L')now=now-d;//減掉
        if(c=='R')now=now+d;//加上

        now=(now%100+100)%100;//太大的,太小的,都限制在0-99之間

        if(now==0)ans++;//轉動時停在0的地方
    }
    cout<<"答案是:"<<ans;
}
