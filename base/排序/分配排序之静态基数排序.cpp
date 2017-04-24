/*
 ������
 Ͱ����ֻ�ʺ�m��С�����
 �������򣺵�m�ܴ�ʱ�����Խ�һ����¼��ֵ��ֳɶ�����������бȽ�
 �ռ���ۣ�
 O(n+r)����ʱ����(n)��r��������
 ʱ�临�Ӷ�: O(d*(n+r))  ��d��Ͱʽ����
 �ȶ��ԣ��ȶ�
*/

void RadixSort(vector<int>& nums, int d, int r){
	int n=nums.size();
	vector<int> temp(n,0);
	vector<int> count(r,0);		//r:radix,10
	int radix=1;
	int i,j,k;
	for(i=1;i<=d;i++){		//d:������ĸ���
		for(j=0;j<r;j++){
			count[j]=0;
		}
		for(j=0;j<n;j++){
			k=(nums[j]/radix)%r;
			count[k]++;
		}
		for(j=1;j<r;j++){
			count[j]=count[j]+count[j-1];
		}
		for(j=n-1;j>=0;j--){
			k=(nums[j]/radix)%r;
			count[k]--;
			temp[count[k]]=nums[j];
		}
		for(j=0;j<n;j++){
			nums[j]=temp[j];
		}
		radix*=r;
	}
}

