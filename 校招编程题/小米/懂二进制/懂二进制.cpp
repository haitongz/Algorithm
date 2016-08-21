/**************************************
* @author dujiong
* @date 2016.8.21
* @version V0.1
**************************************/

class Solution {
public:
    /**
     * ����������ζ����Ʊ��λ����ͬ������
     *
     * @param m ����m
     * @param n ����n
     * @return ����
     */
    int countBitDiff(int m, int n) {
        int temp=m^n;
        int ret=0;
        while(temp!=0){
            temp=temp&(temp-1);
            ret++;
        }
        return ret;
    }
};
