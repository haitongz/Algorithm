/*
 ����:
 ���鳤��Ϊn�����м�¼����[0,m)��
 ʱ�临�Ӷ�O(n+m)
 �ռ���ۣ�m��������������Ϊn����ʱ����
 ������m�����n��С�����
 �ȶ��ԣ��ȶ�
 */
 
 void BucketSort(vector<int>& nums, int max){
	 int n=nums.size();
	 vector<int> temp(begin(nums), end(nums));
	 vector<int> count(max);
	 for(int i=0;i<max;i++){
		 count[i]=0;
	 }
	 for(int i=0;i<n;i++){
		 count[nums[i]]++;
	 }
	 for(int i=0;i<max;i++){
		 count[i]=count[i-1]+count[i];
	 }
	 for(int i=n-1;i>=0;i--){		//β����ʼ����֤�ȶ���
		 nums[--count[temp[i]]]=temp[i];
	 }
}