//week10-2.cpp埃程,程キА羱
class Solution {
public:
    double average(vector<int>& salary) {
        double total=0;//р羱癬ㄓ
        int N=salary.size();//羆n
        int M=salary[0],m=salary[0];//材0讽程
        for(int i=0;i<N;i++){
            total+=salary[i];//羱常癬ㄓ
            if(salary[i]>M)M=salary[i];//ゑ程,程传
            if(salary[i]<m)m=salary[i];//ゑ程,程传
        }
        return (total-M-m)/(N-2);//埃ㄢ(程,程)埃
    }
};
