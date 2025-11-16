#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"


// ノードを初期化
void initialize_node(node* p, int val)
{
	p->pNext = NULL;
	p->data = val;
}

// リストを初期化
void initialize_list(list* l)
{
	l->header = NULL;
}


// 先頭にデータを追加
//pをl->headerの前に置くイメージらしい
void push_front(list* l, node* p)
{
	p->pNext =l->header;//先頭をpの次へ
	l->header = p;//先頭にpを入れる
	// ToDo: ここにコードを追加
}

// pの次のノードを削除
//p->Nextをとって繋ぎなおす
void remove_next(list* l, node* p)
{
	node* target = p->pNext;//ターゲットはpの次
	if (!target) return ;//pの次が存在せなければなし

	p->pNext = target->pNext;//p->Nextのp->Nextにつなぐ

	// ToDo: ここにコードを追加
}


// pの次のノードを取得
node* get_next(list* l, node* p)
{
	if (!p) return NULL;
	return p->pNext;

	return NULL;
}
