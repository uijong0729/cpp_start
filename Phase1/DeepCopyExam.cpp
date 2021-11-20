#include <vcruntime_string.h>

class ClassRecord {
public:
	ClassRecord(const int* scores, int count);
	~ClassRecord();

private:
	int mCount;
	int* mScores;
};

ClassRecord::ClassRecord(const int* scores, int count)
	:mCount(count)
{
	mScores = new int[mCount];
	memcpy(mScores, scores, mCount * sizeof(int));
}

// 사용자가 만든 복사 생성자
// - 포인터 변수가 가리키는 실제 데이터까지도 복사
// - 기본 자료형 데이터는 그냥 초기화 시키면 됨
ClassRecord::ClassRecord(const ClassRecord& other)
	: mCount(other.mCount)
{
	// 포인터인 mScore를 새로 할당후 실제 데이터 복사
	mScores = new int[mCount];

	// - memcpy(오리지널, 복사목표, 메모리 사이즈)
	memcpy(mScores, other.mScores, mCount * sizeof(int));
}

ClassRecord::~ClassRecord()
{
	delete[] mScores;
}

int main()
{
	const int* scores = new int[5];
	ClassRecord classRecord(scores, 5);
	
	// 암시적 복사생성자를 호출하면 
	// 포인터는 주소만 복사(얕은 복사)되기 때문에 두 개체가 데이터를 공유하는 상황이 발생
	ClassRecord* classRecordCopy = new ClassRecord(classRecord);
	
	delete  classRecordCopy;
}