#include "PersonList.h"

PersonList::PersonList() {
	head = new Person;
	head->setNext(head);
}
PersonList::PersonList(int a[], int n) {
	head = new Person;
	head->setNext(head);
	Person* pre = head;
	for (int i = 0; i < n; i++) {
		Person* p = new Person;
		p->setPassword(a[i]);
		p->setId(i + 1);
		pre->setNext(p);
		pre = p;
	}
	pre->setNext(head);
}
void PersonList::show(int n) {
	Person* p = head->getNext();
	for (int i = 0; i < n; i++) {
		std::cout << "序号：" << p->getId() << "手中的密码为：" << p->getPassword() << std::endl;
		p = p->getNext();
	}
}
void PersonList::Joeph(int n) {
	int m = n;
	int order = 0, cnt = 1;
	Person* pre = head;
	Person* p = head->getNext();
	while (pre != p->getNext()) {
		if (cnt == m && p != head) {
			Person* x = new Person;
			x = p;
			pre->setNext(p->getNext());
			p = p->getNext();
			order++;
			std::cout << "第" << order << "个人出列，序号为" << x->getId() << std::endl;
			m = x->getPassword();
			delete(x);
			cnt = 1;
		}
		else {
			if (p != head)
				cnt++;
			pre = p;
			p = p->getNext();
		}
	}
	std::cout << "第" << ++order << "个人出列，序号为" << p->getId() << std::endl;
	delete(p);
	delete(pre);
}