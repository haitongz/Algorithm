/*
 *leetcode:448
 *Ѱ��Ԫ�ط�Χ[1,n]�������ȱʧ��еĳ�������
 *n=nums.size()
 */
vector<int> findDisappearedNumbers(vector<int>& nums) {
	vector<int> ret;
	int len=nums.size();
	for(int i=0;i<len;i++){
		int index=abs(nums[i])-1;
		nums[index]=(nums[index]>0��-nums[index]:nums[index]);
	}
	for(int i=0;i<len;i++){
		if(nums[i]>0){
			ret.push_back(i+1);
		}
	}
	return ret;
}