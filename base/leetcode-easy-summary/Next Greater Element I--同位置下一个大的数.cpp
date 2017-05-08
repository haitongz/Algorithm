/*
 *leetcode: 496
 *�����������飬��һ���ǵڶ������Ӽ����ҳ���һ��������ÿ����
 *�ڵڶ���������ͬ�±�λ��֮���һ�������������û�з���-1
 */
 
vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums){
	int len1 = findNums.size();
	int len2 = nums.size();
	vector<int> ret;
	if(len1==0 || len2==0) return ret;
	ret.reserve(len1);
	stack<int> s;
	map<int, int> imap;
	int i=0;
	for(int i=0;i<len2;i++){
		while(!s.empty()&&s.top()<nums[i]){
			imap[s.top()]=nums[i];
			s.pop();
		}
		s.push(nums[i]);
	}
	for(int i=0;i<len1;i++){
		if(imap.find(findNums[i])!=findNums.end()){
			ret.push_back(imap[findNums[i]]);
		}else{
			ret.push_back(-1);
		}
	}
	return ret;
}