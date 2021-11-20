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

// ����ڰ� ���� ���� ������
// - ������ ������ ����Ű�� ���� �����ͱ����� ����
// - �⺻ �ڷ��� �����ʹ� �׳� �ʱ�ȭ ��Ű�� ��
ClassRecord::ClassRecord(const ClassRecord& other)
	: mCount(other.mCount)
{
	// �������� mScore�� ���� �Ҵ��� ���� ������ ����
	mScores = new int[mCount];

	// - memcpy(��������, �����ǥ, �޸� ������)
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
	
	// �Ͻ��� ��������ڸ� ȣ���ϸ� 
	// �����ʹ� �ּҸ� ����(���� ����)�Ǳ� ������ �� ��ü�� �����͸� �����ϴ� ��Ȳ�� �߻�
	ClassRecord* classRecordCopy = new ClassRecord(classRecord);
	
	delete  classRecordCopy;
}