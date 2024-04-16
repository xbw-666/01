typedef int ElemType;
typedef struct CSNode
{
	ElemType data;
	struct CSNode* firstchild, * nextchild;//一个指针域指向孩子,一个指针域指向他的兄弟,同层相邻的结点
}CSNode,*CSTree;//此方法甚是奇妙
