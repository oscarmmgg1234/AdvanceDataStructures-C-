{\rtf1\ansi\ansicpg1252\cocoartf2513
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red99\green226\blue255;\red251\green30\blue255;\red0\green0\blue0;
\red50\green244\blue241;\red128\green255\blue167;\red235\green239\blue24;\red19\green150\blue163;}
{\*\expandedcolortbl;;\cssrgb\c44518\c90662\c100000;\cssrgb\c100000\c29678\c100000;\csgray\c0;
\cssrgb\c19571\c95778\c95688;\cssrgb\c55755\c100000\c71263;\cssrgb\c93803\c93590\c10850;\cssrgb\c0\c65000\c70000;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs22 \cf2 \CocoaLigature0 #include \cf3 <iostream>\cf4 \
\cf2 #include \cf3 "List.h"\cf4 \
\
\cf5 /***********************************************************************************************\cf4 \
\cf5 Oscar Maldonado\cf4 \
\cf3 005487270\cf4 \
\cf5 Spring \cf3 2019\cf4 \
\cf5 CSE330\cf4 \
\cf5 LAB05\cf4 \
\cf5 ***********************************************************************************************/\cf4 \
\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
\cf6 void\cf4  List<Object>::List::init()\cf5 //init()\cf4 \
\{\
theSize = \cf3 0\cf4 ;\
head = \cf7 new\cf4  Node;\
tail = \cf7 new\cf4  Node;\
head->next = tail;\
tail->prev = head;\
\}\
\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
\cf6 struct\cf4  List<Object>::List::Node\cf5 //Node struct\cf4 \
\{\
Object data;\
Node* next;\
Node* prev;\
\
Node(Object & d,Node* n = \cf3 nullptr\cf4 , Node* p = \cf3 nullptr\cf4 ) : data\{d\}, next\{n\}, prev\{p\} \{\}\
Node(Object && d,Node* n = \cf3 nullptr\cf4 , Node* p = \cf3 nullptr\cf4 ) : data\{std::move(d)\}, next\{std::move(n)\}, prev\{std::move(p)\}\{\}\
\};\
\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
\cf6 class\cf4  List<Object>::List::const_iterator \cf5 //iterator class \cf4 \
\{\
Node* current;\
\cf7 friend\cf4  \cf6 class\cf4  List<Object>;\
Object& retrieve() \cf6 const\cf4 \
\{\
\cf7 return\cf4  current->data;\
\}\
const_iterator(Node* p) : current\{p\} \{\}\
\
\cf7 public\cf4 :\
\
const_iterator() : current\{\cf3 nullptr\cf4 \}\{\}\
\
Object& \cf7 operator\cf4 *() \cf6 const\cf4  \{\cf7 return\cf4  retrieve();\
\
const_iterator& \cf7 operator\cf4 ++()\
\{\
current = current->next;\
\cf7 return\cf4  *\cf7 this\cf4 ;\
\}\
const_iterator \cf7 operator\cf4 ++(\cf6 int\cf4 )\
\{\
const_iterator copy = \cf7 this\cf4 ;\
*(++\cf7 this\cf4 );\
\cf7 return\cf4  copy;\
\}\
\
const_iterator& \cf7 operator\cf4 --()\
\cb8 \{\cb1 \
current = current->prev;\
\cf7 return\cf4  *\cf7 this\cf4 ;\
\cb8 \}\cb1 \
const_iterator \cf7 operator\cf4 --(\cf6 int\cf4 )\
\{\
const_iterator copy = *\cf7 this\cf4 ;\
--(*\cf7 this\cf4 );\
\cf7 return\cf4  copy;\
\}\
\
\cf6 bool\cf4  \cf7 operator\cf4 ==(\cf6 const\cf4  const_iterator & rhs) \cf6 const\cf4 \{ \cf7 return\cf4  current == rhs.current; \}\
\cf6 bool\cf4  \cf7 operator\cf4 !=(\cf6 const\cf4  const_iterator & rhs) \cf6 const\cf4  \{ \cf7 return\cf4  current != rhs.current; \}\
                                         head->next = tail;\
tail->prev = head;\
\}\
\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
\cf6 struct\cf4  List<Object>::List::Node\cf5 //Node struct\cf4 \
\{\
Object data;\
Node* next;\
Node* prev;\
\
Node(Object & d,Node* n = \cf3 nullptr\cf4 , Node* p = \cf3 nullptr\cf4 ) : data\{d\}, next\{n\}, prev\{p\} \{\}\
Node(Object && d,Node* n = \cf3 nullptr\cf4 , Node* p = \cf3 nullptr\cf4 ) : data\{std::move(d)\}, next\{std::move(n)\}, prev\{std::move(p)\}\{\}\
\};\
\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
\cf6 class\cf4  List<Object>::List::const_iterator \cf5 //iterator class \cf4 \
\{\
Node* current;\
\cf7 friend\cf4  \cf6 class\cf4  List<Object>;\
Object& retrieve() \cf6 const\cf4 \
\{\
\cf7 return\cf4  current->data;\
\}\
const_iterator(Node* p) : current\{p\} \{\}\
\
\cf7 public\cf4 :\
\
const_iterator() : current\{\cf3 nullptr\cf4 \}\{\}\
\
Object& \cf7 operator\cf4 *() \cf6 const\cf4  \{\cf7 return\cf4  retrieve();\
\
const_iterator& \cf7 operator\cf4 ++()\
\{\
current = current->next;\
\cf7 return\cf4  *\cf7 this\cf4 ;\
\}\
const_iterator \cf7 operator\cf4 ++(\cf6 int\cf4 )\
\{\
const_iterator copy = \cf7 this\cf4 ;\
*(++\cf7 this\cf4 );\
\cf7 return\cf4  copy;\
\}\
\
const_iterator& \cf7 operator\cf4 --()\
\{\
current = current->prev;\
\cf7 return\cf4  *\cf7 this\cf4 ;\
\}\
const_iterator \cf7 operator\cf4 --(\cf6 int\cf4 )\
\{\
const_iterator copy = *\cf7 this\cf4 ;\
--(*\cf7 this\cf4 );\
\cf7 return\cf4  copy;\
\}\
\
\cf6 bool\cf4  \cf7 operator\cf4 ==(\cf6 const\cf4  const_iterator & rhs) \cf6 const\cf4 \{ \cf7 return\cf4  current == rhs.current; \}\
\cf6 bool\cf4  \cf7 operator\cf4 !=(\cf6 const\cf4  const_iterator & rhs) \cf6 const\cf4  \{ \cf7 return\cf4  current != rhs.current; \}\
\
\};\
\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
\cf6 class\cf4  List<Object>::interator : \cf7 public\cf4  List<Object>::const_iterator\cf5 //iterator class\cf4 \
\{\
iterator()\{\}\
\cf6 const\cf4  Object& \cf7 operator\cf4 *()\
\{\
\cf7 this\cf4 ->current = \cf7 this\cf4 ->current->next;\
\cf7 return\cf4  *\cf7 this\cf4 ;\
\}\
\
iterator \cf7 operator\cf4 ++(\cf6 int\cf4 )\
\{\
iterator copy = *\cf7 this\cf4 ;\
++(*\cf7 this\cf4 );\
\cf7 return\cf4  copy;\
\}\
\
iterator& \cf7 operator\cf4 --()\
\{\
\cf7 this\cf4 ->current = \cf7 this\cf4 ->current->prev;\
\cf7 return\cf4  *\cf7 this\cf4 ;\
\}\
\
iterator \cf7 operator\cf4 --(\cf6 int\cf4 )\
\{\
iterator copy = *\cf7 this\cf4 ;\
--(*\cf7 this\cf4 );\
\cf7 return\cf4  copy;\
\}\
\cf7 private\cf4 :\
iterator(Node* obj) : List<Object>::const_iterator\{obj\}\{\}\
\cf7 friend\cf4  \cf6 class\cf4  List<Object>;\
\};\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
List<Object>::List(\cf6 const\cf4  List & rhs) : theSize\{rhs.theSize\}, head\{rhs.head\} , tail\{rhs.tail\}\{\} \cf5 // copy constructor\cf4 \
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
List<Object>::List(List&& rhs) : theSize\{std::move(rhs.theSize)\}, head\{std::move(rhs.head)\}, tail\{std::move(rhs.tail)\} \{\} \cf5 //move constructor\cf4 \
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
List<Object>::~List()\
\{\
clear();\
head = \cf3 nullptr\cf4 ;\
tail = \cf3 nullptr\cf4 ;\
\}\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
List<Object>::List& List<Object>::\cf7 operator\cf4 =(\cf6 const\cf4  List& obj)\
\{\
List copy = obj;\
std::swap(*\cf7 this\cf4 ,copy);\
\cf7 return\cf4  *\cf7 this\cf4 ;\
\}\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
List<Object>::List& List<Object>::\cf7 operator\cf4 =(List&& obj)\
\{\
std::swap(theSize,obj.theSize);\
std::swap(head,obj.head);\
std::swap(tail,obj.tail);\
\cf7 return\cf4  *\cf7 this\cf4 ;\
\}\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
\cf6 typename\cf4  List<Object>::iterator List<Object>::insert(iterator itr,\cf6 const\cf4  Object& x);\cf5 //insert\cf4 \
\{\
Node* p = itr.current;\
theSize++;\
\cf7 return\cf4  \{p->prev = p->prev->next = \cf7 new\cf4  Node(x,p->prev,p)\};\
\}\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
\cf6 typename\cf4  List<Object>::iterator List<Object>::insert(iterator itr, Object&& x)\cf5 //move insert\cf4 \
\{\
node* p =itr.current;\
theSize++;\
\cf7 return\cf4  \{p->prev = p->prev->next = \cf7 new\cf4  Node(x,std::move(p->prev),p)\};\
\}\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
\cf6 typename\cf4  List<Object>::iterator List<Object>::erase(iterator itr)\cf5 //erase\cf4 \
\{\
Node* p = itr.current;\
iterator retVal\{p->next\};\
p->prev->next = p->next;\
\cf7 delete\cf4  p;\
theSize--;\
\
\cf7 return\cf4  retVal;\
\}\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
\cf6 typename\cf4  List<Object>::iterator List<Object>::erase(iterator from, iterator to)\cf5 //erase range\cf4 \
\{\
\cf7 for\cf4 (iterator itr = from; itr!= to;)\
        itr = erase(itr);\
\cf7 return\cf4  to;\
\}\
\cf6 template\cf4  <\cf6 typename\cf4  Object>\
\cf6 void\cf4  List<Object>::clear()\
\{\
\cf7 while\cf4 (!empty())\
        pop_front();\
\}\
}