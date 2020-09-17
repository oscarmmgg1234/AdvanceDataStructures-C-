{\rtf1\ansi\ansicpg1252\cocoartf2513
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red99\green226\blue255;\red0\green0\blue0;\red50\green244\blue241;
\red251\green30\blue255;\red235\green239\blue24;\red128\green255\blue167;\red224\green228\blue9;}
{\*\expandedcolortbl;;\cssrgb\c44518\c90662\c100000;\csgray\c0;\cssrgb\c19571\c95778\c95688;
\cssrgb\c100000\c29678\c100000;\cssrgb\c93803\c93590\c10850;\cssrgb\c55755\c100000\c71263;\cssrgb\c90000\c90000\c0;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs22 \cf2 \CocoaLigature0 #ifndef LIST_LIST_H\cf3 \
\cf2 #define LIST_LIST_H\cf3 \
\cf4 //\cf3 \
\cf4 //\cf3 \
\cf4 // Created by Oscar Maldonado on \cf5 2019\cf4 -\cf2 0\cf5 5\cf4 -\cf5 21.\cf3 \
\cf4 //\cf3 \
\
\cf2 #include \cf5 <cassert>\cf3 \
\cf2 #include \cf5 <iostream>\cf3 \
\
\cf6 using\cf3  \cf7 namespace\cf3  std;\
\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 class\cf3  List\
\{\
    \cf7 struct\cf3  Node;\
\
\
    \cf7 int\cf3  theSize;\
    Node *head;\
    Node *tail;\
\
    \cf7 void\cf3  init();\
\
\cf6 public\cf3 :\
    \cf7 class\cf3  const_iterator;\
    \cf7 class\cf3  iterator;\
\
    List() \{  init();\}\
    List(\cf7 const\cf3  List & rhs);\
    List(List && rhs);\
    ~List();\
    List & \cf6 operator\cf3 =(\cf7 const\cf3  List & rhs);\
    List & \cf6 operator\cf3 =(List && rhs);\
\
    iterator begin() \{ \cf6 return\cf3  head->next; \}\
    const_iterator begin() \cf7 const\cf3  \{ \cf6 return\cf3  head->next; \}\
    iterator end() \{ \cf6 return\cf3  tail; \}\
    const_iterator end() \cf7 const\cf3  \{ \cf6 return\cf3  tail; \}\
\
    \cf7 int\cf3  \cb8 size\cb1 () \cf7 const\cf3  \{ \cf6 return\cf3  theSize; \}\
    \cf7 bool\cf3  empty() \cf7 const\cf3  \{ \cf6 return\cf3  theSize == \cf5 0\cf3 ; \}\
\
    \cf7 void\cf3  clear();\
\
    Obj & front() \{ \cf6 return\cf3  *begin(); \}\
    \cf7 const\cf3  Obj & front() \cf7 const\cf3  \{ \cf6 return\cf3  *begin(); \}\
    Obj & back() \{ \cf6 return\cf3  *--end(); \}\
    \cf7 const\cf3  Obj & back() \cf7 const\cf3  \{ \cf6 return\cf3  *--end(); \}\
\
    \cf7 void\cf3  push_front(\cf7 const\cf3  Obj & x) \{ insert(begin(), x); \}\
    \cf7 void\cf3  push_front(Obj && x) \{ insert(begin(), move(x)); \}\
    \cf7 void\cf3  push_back(\cf7 const\cf3  Obj & x) \{ insert(end(), x); \}\
    \cf7 void\cf3  push_back(Obj && x) \{ insert(end(), move(x)); \}\
\
    \cf7 void\cf3  pop_front() \{ erase(begin()); \}\
    \cf7 void\cf3  pop_back() \{ erase(--end()); \}\
\
    iterator insert(iterator, \cf7 const\cf3  Obj &);\
    iterator insert(iterator, Obj &&);\
\
    iterator erase(iterator);\
    iterator erase(iterator, iterator);\
\};\
\
\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 struct\cf3  List<Obj>::Node\
\{\
Obj data;\
Node* next;\
Node* prev;\
\
Node():next\{\cf5 nullptr\cf3 \}, prev\{\cf5 nullptr\cf3 \}\{ \}\
Node(\cf7 const\cf3  Obj& x, Node* p = \cf5 nullptr\cf3 , Node* n = \cf5 nullptr\cf3  ) : next\{n\}, prev\{p\}, data\{x\} \{ \}\
Node(Obj&& x, Node* p = \cf5 nullptr\cf3 , Node* n = \cf5 nullptr\cf3 ) : next\{n\}, prev\{p\},data\{move(x)\} \{ \}\
\};\
\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 void\cf3  List<Obj>::clear()\
\{\
    \cf6 while\cf3 (!empty())\
        List<Obj>::pop_front();\
\}\
\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 class\cf3  List<Obj>::const_iterator \cf4 // const_iterator class\cf3 \
\{\
\cf6 public\cf3 :\
    const_iterator(): current\{\cf5 nullptr\cf3 \} \{ \}\
    \cf7 const\cf3  Obj & \cf6 operator\cf3 *() \cf7 const\cf3  \{ \cf6 return\cf3  retrieve(); \}\
\
    const_iterator & \cf6 operator\cf3 ++();\
    const_iterator \cf6 operator\cf3 ++(\cf7 int\cf3 );\
\
    const_iterator & \cf6 operator\cf3 --();  \cf4 // not in textbook\cf3 \
    const_iterator \cf6 operator\cf3 --(\cf7 int\cf3 ); \cf4 // not in textbook\cf3 \
\
    \cf7 bool\cf3  \cf6 operator\cf3 ==(\cf7 const\cf3  const_iterator & rhs) \cf7 const\cf3  \{ \cf6 return\cf3  current == rhs.current; \}\
    \cf7 bool\cf3  \cf6 operator\cf3 !=(\cf7 const\cf3  const_iterator & rhs) \cf7 const\cf3  \{ \cf6 return\cf3  current != rhs.current; \}\
\
\cf6 protected\cf3 :\
    Node *current;\
\
    Obj& retrieve() \cf7 const\cf3  \{ \cf6 return\cf3  current->data; \}\
    const_iterator(Node* p): current\{p\} \{ \}\
\
            \cf6 friend\cf3  \cf7 class\cf3  List<Obj>;\
\
\
\};\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 typename\cf3  List<Obj>::const_iterator & List<Obj>::const_iterator::\cf6 operator\cf3 ++() \cf4 // pre-increment\cf3 \
\{\
    current = current->next;\
    \cf6 return\cf3  *\cf6 this\cf3 ;\
\}\
\cf7 template\cf3 <\cf7 typename\cf3  Obj>\
\cf7 typename\cf3  List<Obj>::const_iterator  List<Obj>::const_iterator::\cf6 operator\cf3 ++(\cf7 int\cf3 ) \cf4 // post-increment\cf3 \
\{\
    List<Obj>::const_iterator copy = *\cf6 this\cf3 ;\
    ++(*\cf6 this\cf3 );\
    \cf6 return\cf3  copy;\
\}\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 typename\cf3  List<Obj>::const_iterator & List<Obj>::const_iterator::\cf6 operator\cf3 --() \cf4 // pre-decrement\cf3 \
\{\
    current = current->prev;\
    \cf6 return\cf3  *\cf6 this\cf3 ;\
\}\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 typename\cf3  List<Obj>::const_iterator  List<Obj>::const_iterator::\cf6 operator\cf3 --(\cf7 int\cf3 ) \cf4 // post-decrement\cf3 \
\{\
    List<Obj>::const_iterator copy = *\cf6 this\cf3 ;\
    --(*\cf6 this\cf3 );\
    \cf6 return\cf3  copy;\
\}\
\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 class\cf3  List<Obj>::iterator : \cf6 public\cf3  List<Obj>::const_iterator \cf4 // iterator\cf3 \
\{\
\cf6 public\cf3 :\
    iterator() \{ \}\
    Obj & \cf6 operator\cf3 *() \{ \cf6 return\cf3  List<Obj>::const_iterator::retrieve(); \}              \cf4 // mutator\cf3 \
    \cf7 const\cf3  Obj & \cf6 operator\cf3 *() \cf7 const\cf3  \{ \cf6 return\cf3  List<Obj>::const_iterator::\cf6 operator\cf3 *(); \} \cf4 // accessor\cf3 \
\
    iterator & \cf6 operator\cf3 ++();\
    iterator \cf6 operator\cf3 ++(\cf7 int\cf3 );\
 iterator & \cf6 operator\cf3 --();\
    iterator \cf6 operator\cf3 --(\cf7 int\cf3 );\
\
\cf6 protected\cf3 :\
    iterator(Node *n): List<Obj>::const_iterator\{n\} \{ \}\
    \cf6 friend\cf3  \cf7 class\cf3  List<Obj>;\
\
\
\};\
\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\
\cf7 typename\cf3  List<Obj>::iterator  List<Obj>::iterator::\cf6 operator\cf3 --(\cf7 int\cf3 ) \cf4 // post-decrement\cf3 \
\{\
    List<Obj>::iterator copy = *\cf6 this\cf3 ;\
    --(*\cf6 this\cf3 );\
    \cf6 return\cf3  copy;\
\}\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 typename\cf3  List<Obj>::iterator & List<Obj>::iterator::\cf6 operator\cf3 --() \cf4 // pre-decrement\cf3 \
\{\
    \cf6 this\cf3 ->current = \cf6 this\cf3 ->current->prev;\
    \cf6 return\cf3  *\cf6 this\cf3 ;\
\}\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 typename\cf3  List<Obj>::iterator & List<Obj>::iterator::\cf6 operator\cf3 ++() \cf4 // pre-decrement\cf3 \
\{\
   List<Obj>::iterator copy = *\cf6 this\cf3 ;\
   ++(*\cf6 this\cf3 );\
   \cf6 return\cf3  copy;\
\
\
\}\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 typename\cf3  List<Obj>::iterator  List<Obj>::iterator::\cf6 operator\cf3 ++(\cf7 int\cf3 ) \cf4 // post-decrement\cf3 \
\{\
    List<Obj>::iterator copy = *\cf6 this\cf3 ;\
    --(*\cf6 this\cf3 );\
    \cf6 return\cf3  copy;\
\}\
\cf7 template\cf3  <\cf7 typename\cf3  Object>\
List<Object>::List(\cf7 const\cf3  List & rhs)\
\{\
    init();\
    \cf6 for\cf3  (\cf7 auto\cf3  & x: rhs)\
        push_back(x);\
\}\
\
\cf7 template\cf3  <\cf7 typename\cf3  Object>\
List<Object> & List<Object>::\cf6 operator\cf3 =(List && rhs)\
\{\
    swap(theSize, rhs.theSize);\
    swap(head, rhs.head);\
    swap(tail, rhs.tail);\
\
    \cf6 return\cf3  *\cf6 this\cf3 ;\
\}\
\
\cf7 template\cf3  <\cf7 typename\cf3  Object>\
\cf7 typename\cf3  List<Object>::iterator List<Object>::insert(List<Object>::iterator itr, \cf7 const\cf3  Object & x)\
\{\
    Node *p = itr.current;\
    Node *newNode = \cf6 new\cf3  Node(x, p->prev, p);\
    theSize++;\
    \cf6 return\cf3  p->prev = p->prev->next = newNode;\
\}\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
List<Obj>::List(List&& rhs): theSize\{rhs.theSize\}, head\{rhs.head\}, tail\{rhs.tail\}\
\{\
rhs.theSize = \cf5 0\cf3 ;\
rhs.head = \cf5 nullptr\cf3 ;\
rhs.tail = \cf5 nullptr\cf3 ;\
\}\cf4 // List move constructor\cf3 \
\
\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
List<Obj>::~List()\
\{\
    List<Obj>::clear();\
    \cf6 delete\cf3  head;\
    \cf6 delete\cf3  tail;\
\}\
\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 typename\cf3  List<Obj>::iterator List<Obj>::insert(List<Obj>::iterator itr, Obj && x)\
\{\
    Node* p = itr.current;\
    theSize++;\
    \cf6 return\cf3  \{ p->prev = p->prev->next = \cf6 new\cf3  Node\{move(x),p->prev,p\}\};\
\}\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 typename\cf3  List<Obj>::iterator List<Obj>::erase(List<Obj>::iterator itr)\
\{\
  Node* p = itr.current;\
  List<Obj>::iterator retVal\{p->next\};\
  p->prev->next = p->next;\
  p->next->prev = p->prev;\
  \cf6 delete\cf3  p;\
  theSize--;\
    \cf6 return\cf3  retVal;\
\}\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 typename\cf3  List<Obj>::iterator List<Obj>::erase(List<Obj>::iterator from, List<Obj>::iterator to)\
\{\
    \cf6 for\cf3  (List<Obj>::iterator itr = from; itr != to;)\
    \{\
        itr = List<Obj>::erase(itr);\
    \}\
\}\
\
\
\
\cf7 template\cf3  <\cf7 typename\cf3  Obj>\
\cf7 void\cf3  List<Obj>::init() \{\
    theSize = \cf5 0\cf3 ;\
    head = \cf6 new\cf3  Node();\
    assert(head);\
\
    tail = \cf6 new\cf3  Node();\
    assert(tail);\
    head->next = tail;\
    tail->prev = head;\
\}\
\
\
\
\
\
\cf2 #endif\cf3  \cf4 //LIST_LIST_H}