//��д��Ҫ���������ڶ��ǲ���Ҫ�Ŀ���
Singleton* Singleton::getInstance(){
	Lock lock;
	if(instance==nullptr){
		instance = new Singleton();
	}
	return instance;
}

//˫��飬�������ڴ�reorder�������̰߳�ȫ
Singleton* Singleton::getInstance(){
	if(instance==nullptr){
		Lock lock;
		if(instance==nullptr){
			instance = new Singleton();
		}
	}
	return instance;
}