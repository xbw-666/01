typedef int ElemType;
typedef struct CSNode
{
	ElemType data;
	struct CSNode* firstchild, * nextchild;//һ��ָ����ָ����,һ��ָ����ָ�������ֵ�,ͬ�����ڵĽ��
}CSNode,*CSTree;//�˷�����������
