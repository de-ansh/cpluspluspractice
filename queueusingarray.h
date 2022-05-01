template<typename T>
class Queueusingarr{
	T *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;
public:
	Queueusingarr(int s){
		data= new T[s];
		nextIndex=0;
		firstIndex=-1;
		size=0;
		capacity=s;
	}
	int getSize(){
		return size;
	}
	bool isempty(){
		return size==0;
	}
	void enqueue(T element){
		if(size==capacity){
			T *newdata= new T[2*capacity];
			int j=0;
			for(int i=firstIndex;i<capacity;i++){
				newdata[j]=data[i];
				j++;
			}
			for(int i=0;i<firstIndex;i++){
				newdata[j]=data[i];
				j++;
			}
			delete [] data;
			data= newdata;
			firstIndex=0;
			nextIndex=capacity;

		}
		data[nextIndex]=element;
		nextIndex= (nextIndex+1)%capacity;
		if(firstIndex==-1) firstIndex=0;
		size++;
	}
	T front(){
		if(isempty()){
			cout<<"Queue is empty"<<endl;
			return 0;
		}
		return data[firstIndex];
	}
	T dequeue(){
		if(isempty()){
			cout<<"Queue is empty"<<endl;
			return 0;
		}
		T ans= data[firstIndex];
		firstIndex= (firstIndex+1)%capacity;
		size--;
		if (size==0)
		{
			firstIndex=-1;
			nextIndex=0;
		}
		return ans;
	}

};

