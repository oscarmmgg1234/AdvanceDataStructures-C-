{\rtf1\ansi\ansicpg1252\cocoartf2513
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red99\green226\blue255;\red0\green0\blue0;\red251\green30\blue255;
\red235\green239\blue24;\red128\green255\blue167;\red224\green228\blue9;\red50\green244\blue241;\red254\green215\blue216;
\red19\green150\blue163;}
{\*\expandedcolortbl;;\cssrgb\c44518\c90662\c100000;\csgray\c0;\cssrgb\c100000\c29678\c100000;
\cssrgb\c93803\c93590\c10850;\cssrgb\c55755\c100000\c71263;\cssrgb\c90000\c90000\c0;\cssrgb\c19571\c95778\c95688;\cssrgb\c100000\c87709\c87701;
\cssrgb\c0\c65000\c70000;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs22 \cf2 \CocoaLigature0 #ifndef SET_H\cf3 \
\cf2 #define SET_H\cf3 \
\
\
\
\cf2 #include \cf4 <iostream>\cf3 \
\cf2 #include \cf4 <cassert>\cf3 \
\
\cf5 using\cf3  \cf6 namespace\cf3  std;\
\
\cf6 template\cf3  <\cf6 typename\cf3  Comparable> \cf6 class\cf3  Set_iterator;\
\
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 class\cf3  Set\
e\
\cf5 public\cf3 :\
    \cf6 typedef\cf3  Set_iterator<Comparable> iterator;\
\
    Set(): root\{\cf4 nullptr\cf3 \}, theSize\{\cf4 0\cf3 \} \{ \}\
    Set(\cf6 const\cf3  Set & rhs) \{ root = clone(rhs.root); theSize = rhs.theSize; \}\
    Set(Set && rhs);\
    ~Set() \{ makeEmpty(root); \}\
    Set & \cf5 operator\cf3 =(\cf6 const\cf3  Set & rhs);\
    Set & \cf5 operator\cf3 =(Set && rhs);\
\
    \cf6 const\cf3  Comparable & findMin() \cf6 const\cf3 ;\
    \cf6 unsigned\cf3  \cf6 int\cf3  count(\cf6 const\cf3  Comparable & x) \cf6 const\cf3 ;\
    \cf6 bool\cf3  empty() \cf6 const\cf3  \{ \cf5 return\cf3  root == \cf4 nullptr\cf3 ; \}\
    \cf6 unsigned\cf3  \cf6 int\cf3  \cb7 size\cb1 () \cf6 const\cf3  \{ \cf5 return\cf3  theSize; \}\
    \cf6 void\cf3  printTree(ostream & out = cout) \cf6 const\cf3 ;\
\
    \cf6 void\cf3  clear() \{ makeEmpty(root); theSize = \cf4 0\cf3 ; \}\
    iterator insert(\cf6 const\cf3  Comparable & x) \{ \cf5 return\cf3  insert(x, \cf4 nullptr\cf3 , root); \}\
    iterator insert(Comparable && x) \{ \cf5 return\cf3  insert(move(x), \cf4 nullptr\cf3 , root); \}\
    \cf6 void\cf3  erase(\cf6 const\cf3  Comparable & x) \{ erase(x, root); \}\
    \cf6 void\cf3  erase(iterator itr);\
\
    iterator begin() \cf6 const\cf3 ; \cf8 // for in-order traversal\cf3 \
    iterator end() \cf6 const\cf3  \{ \cf5 return\cf3  iterator(\cf4 nullptr\cf3 ); \}\
    iterator find(\cf6 const\cf3  Comparable & x) \cf6 const\cf3  \{ \cf5 return\cf3  find(x, root); \}\
\
\cf5 private\cf3 :\
    \cf6 struct\cf3  BinaryNode\
    \{\
        Comparable element;\
        BinaryNode * parent;\
        BinaryNode * left;\
        BinaryNode * right;\
\
        BinaryNode(\cf6 const\cf3  Comparable & theElement, BinaryNode * p, BinaryNode * lt, BinaryNode * rt):\
                element\{theElement\}, parent\{p\}, left\{lt\}, right\{rt\} \{ \}\
        BinaryNode(Comparable && theElement, BinaryNode * p, BinaryNode * lt, BinaryNode * rt):\
                element\{move(theElement)\}, parent\{p\}, left\{lt\}, right\{rt\} \{ \}\
    \};\
\
    BinaryNode * root;\
    \cf6 unsigned\cf3  \cf6 int\cf3  theSize;\
\
    iterator insert(\cf6 const\cf3  Comparable & x, BinaryNode * p, BinaryNode * & t);\
    iterator insert(Comparable && x, BinaryNode * p, BinaryNode * & t);\
    \cf6 void\cf3  erase(\cf6 const\cf3  Comparable & x, BinaryNode * & t);\
    BinaryNode * findMin(BinaryNode * t) \cf6 const\cf3 ;\
    \cf6 unsigned\cf3  \cf6 int\cf3  count(\cf6 const\cf3  Comparable & x, BinaryNode * t) \cf6 const\cf3 ;\
    \cf6 void\cf3  makeEmpty(BinaryNode * & t);\
    \cf6 void\cf3  printTree(ostream & out, BinaryNode * t, string indent, \cf6 const\cf3  string & tag) \cf6 const\cf3 ; \cf8 // added indent and tag\cf3 \
    BinaryNode * clone(BinaryNode * t) \cf6 const\cf3 ;\
    iterator find(\cf6 const\cf3  Comparable & x, BinaryNode * t) \cf6 const\cf3 ;\
\
    \cf5 friend\cf3  \cf6 class\cf3  Set_iterator<Comparable>;\
\};\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 typename\cf3  Set<Comparable>::BinaryNode * Set<Comparable>::clone(BinaryNode * t) \cf6 const\cf3 \
\{\
\cf5 if\cf3  (t == \cf4 nullptr\cf3 )\
        \cf5 return\cf3  \cf4 nullptr\cf3 ;\
    \cf5 else\cf3  \{\
        BinaryNode * temp = \cf5 new\cf3  BinaryNode\{t->element, \cf4 nullptr\cf3 , clone(t->left), clone(t->right)\};\
        assert(temp);\
        \cf5 if\cf3  (temp->left != \cf4 nullptr\cf3 )\
            temp->left->parent = temp;\
        \cf5 if\cf3  (temp->right != \cf4 nullptr\cf3 )\
            temp->right->parent = temp;\
        \cf5 return\cf3  temp;\
    \}\
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
Set<Comparable>::Set(Set && rhs): root\{rhs.root\}, theSize\{rhs.theSize\}\
\{\
    rhs.root = \cf4 nullptr\cf3 ;\
    rhs.theSize = \cf4 0\cf3 ;\
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 void\cf3  Set<Comparable>::makeEmpty(BinaryNode * & t)\
\{\
    \cf5 if\cf3  (t != \cf4 nullptr\cf3 )\
    \{\
        makeEmpty(t->left);\
        makeEmpty(t->right);\
        \cf5 delete\cf3  t;\
    \}\
    t = \cf4 nullptr\cf3 ;\
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
Set<Comparable> & Set<Comparable>::\cf5 operator\cf3 =(\cf6 const\cf3  Set & rhs)\
\{\
    Set copy = rhs; \cf8 // uses copy constructor\cf3 \
    swap(*\cf5 this\cf3 , copy);\
    \cf5 return\cf3  *\cf5 this\cf3 ;\
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
Set<Comparable> & Set<Comparable>::\cf5 operator\cf3 =(Set && rhs)\
\{\
    swap(root, rhs.root);\
    swap(theSize, rhs.theSize);\
    \cf5 return\cf3  *\cf5 this\cf3 ;\
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 const\cf3  Comparable & Set<Comparable>::findMin() \cf6 const\cf3 \
\{\
    BinaryNode * t = findMin(root);\
\
    \cf5 if\cf3  (t == \cf4 nullptr\cf3 )\
        \cf5 return\cf3  Comparable(); \cf8 // better raise an exception\cf3 \
 \cf5 return\cf3  t->element;\
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 unsigned\cf3  \cf6 int\cf3  Set<Comparable>::count(\cf6 const\cf3  Comparable & x, BinaryNode * t) \cf6 const\cf3 \
\{\
    \cf5 if\cf3  (t == \cf4 nullptr\cf3 )\
        \cf5 return\cf3  \cf4 0\cf3 ;\
    \cf5 else\cf3  \cf5 if\cf3  (x < t->element)\
        \cf5 return\cf3  count(x, t->left);\
    \cf5 else\cf3  \cf5 if\cf3  (x > t->element)\
        \cf5 return\cf3  count(x, t->right);\
    \cf5 else\cf3 \
        \cf5 return\cf3  \cf4 1\cf3 ;\
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 typename\cf3  Set<Comparable>::BinaryNode * Set<Comparable>::findMin(BinaryNode * t) \cf6 const\cf3 \
\{\
    \cf5 if\cf3  (t == \cf4 nullptr\cf3 )\
        \cf5 return\cf3  \cf4 nullptr\cf3 ;\
\
    \cf5 if\cf3  (t->left == \cf4 nullptr\cf3 )\
        \cf5 return\cf3  t;\
\
    \cf5 return\cf3  findMin(t->left); \cf8 // left-slide\cf3 \
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 unsigned\cf3  \cf6 int\cf3  Set<Comparable>::count(\cf6 const\cf3  Comparable & x) \cf6 const\cf3 \
\{\
    \cf5 return\cf3  count(x, root);\
\}\
\
\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 void\cf3  Set<Comparable>::printTree(ostream & out) \cf6 const\cf3 \
\{\
    cout << \cf4 "Print Tree\cf9 \\n\cf4 "\cf3 ;\
    printTree(out, root, \cf4 ""\cf3 , \cf4 ""\cf3 );\
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 void\cf3  Set<Comparable>::printTree(ostream & out, BinaryNode * t, string indent, \cf6 const\cf3  string & tag) \cf6 const\cf3 \
\{\
    \cf5 if\cf3  (t == \cf4 nullptr\cf3 )\
        \cf5 return\cf3 ;\
\
    out << indent << tag << t->element << endl;\
    indent += \cf4 "    "\cf3 ;\
    printTree(out, t->left, indent, \cf4 "L "\cf3 );\
    printTree(out, t->right, indent, \cf4 "R "\cf3 );\
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 typename\cf3  Set<Comparable>::iterator Set<Comparable>::insert(\cf6 const\cf3  Comparable & x, BinaryNode * p, BinaryNode * & t)\
\{\
    \cf5 if\cf3  (t == \cf4 nullptr\cf3 ) \{\
        t = \cf5 new\cf3  BinaryNode\{ x, p, \cf4 nullptr\cf3 , \cf4 nullptr\cf3  \};\
        assert(t);\
        theSize++;\
        \cf5 return\cf3  t;\
    \}\
    \cf5 else\cf3  \cf5 if\cf3  (x < t->element)\
        \cf5 return\cf3  insert(x, t, t->left);\
    \cf5 else\cf3  \cf5 if\cf3  (x > t->element)\
        \cf5 return\cf3  insert(x, t, t->\cf5 else\cf3 \
        \cf5 return\cf3  t; \cf8 // duplicate, do nothing\cf3 \
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 void\cf3  Set<Comparable>::erase(\cf6 const\cf3  Comparable & x, BinaryNode * & t)\
\{\
    \cf5 if\cf3  (t == \cf4 nullptr\cf3 )\
        \cf5 return\cf3 ; \cf8 // not found, do nothing\cf3 \
\
    \cf5 if\cf3  (x < t->element)\
        erase(x, t->left);\
    \cf5 else\cf3  \cf5 if\cf3  (x > t->element)\
        erase(x, t->right);\
    \cf5 else\cf3  \cf5 if\cf3  (t->left != \cf4 nullptr\cf3  && t->right != \cf4 nullptr\cf3 ) \cf8 // two children\cf3 \
    \{\
        t->element = findMin(t->right)->element; \cf8 // findMin() performs left-slide from right\cf3 \
        erase(t->element, t->right);\
    \} \cf5 else\cf3  \{ \cf8 // one or no child\cf3 \
        BinaryNode *oldNode = t;\
        BinaryNode *p = t->parent;\
        t = (t->left != \cf4 nullptr\cf3 ) ? t->left : t->right;\
        \cf5 if\cf3  (t != \cf4 nullptr\cf3 )\
            t->parent = p;\
        \cf5 delete\cf3  oldNode;\
        theSize--;\
    \}\
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 void\cf3  Set<Comparable>::erase(Set<Comparable>::iterator itr) \cf8 // itr is undefined on function return\cf3 \
\{\
    \cf5 if\cf3  (itr == end())\
        \cf5 return\cf3 ; \cf8 // do nothing\cf3 \
\
    BinaryNode * temp;\
    \cf5 if\cf3  (itr.current->left != \cf4 nullptr\cf3  && itr.current->right != \cf4 nullptr\cf3 ) \cf8 // two children\cf3 \
    \{\
        \cf8 // left-slide from right\cf3 \
        temp = itr.current->right;\
        \cf5 while\cf3  (temp->left != \cf4 nullptr\cf3 )\
            temp = temp->left;\
        itr.current->element = temp->element;\
    \} \cf5 else\cf3  \cf8 // one or no child\cf3 \
        temp = itr.current;\
\
    \cf8 // adjust child pointer\cf3 \
    BinaryNode *p = temp->parent;\
);\
    \cf5 else\
\cf3 p->right = (temp->left != \cf4 nullptr\cf3 ) ? temp->left : temp->right;\
\
    \cf8 // adjust parent pointer\cf3 \
    \cf5 if\cf3  (temp->left != \cf4 nullptr\cf3 )\
        temp->left->parent = p;\
    \cf5 else\cf3  \cf5 if\cf3  (temp->right != \cf4 nullptr\cf3 )\
        temp->right->parent = p;\
\
    \cf5 delete\cf3  temp;\
    theSize--;\
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 typename\cf3  Set<Comparable>::iterator Set<Comparable>::begin() \cf6 const\cf3 \
\{\
    BinaryNode * current = root;\
    \cf5 while\cf3  (current \cf5 and\cf3  current->left)\
        current = current->left;\
    \cf5 return\cf3  iterator(current);\
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 class\cf3  Set_iterator\
\{\
\cf5 public\cf3 :\
    \cf6 typedef\cf3  \cf6 typename\cf3  Set<Comparable>::BinaryNode BinaryNode;\
\
    Set_iterator() = \cf5 default\cf3 ;\
    Set_iterator(\cf6 const\cf3  Set_iterator & it) = \cf5 default\cf3 ;\
    Set_iterator(Set_iterator && it) = \cf5 default\cf3 ;\
    ~Set_iterator() = \cf5 default\cf3 ;\
    Set_iterator & \cf5 operator\cf3 =(\cf6 const\cf3  Set_iterator & itr) = \cf5 default\cf3 ;\
    Set_iterator & \cf5 operator\cf3 =(Set_iterator && itr) = \cf5 default\cf3 ;\
\
    Set_iterator(BinaryNode * t): current\{t\} \{ \}\
\
    \cf6 bool\cf3  \cf5 operator\cf3 ==(Set_iterator itr) \cf6 const\cf3  \{ \cf5 return\cf3  current == itr.current; \}\
    \cf6 bool\cf3  \cf5 operator\cf3 !=(Set_iterator itr) \cf6 const\cf3  \{ \cf5 return\cf3  current != itr.current; \}\
    Set_iterator & \cf5 operator\cf3 ++(); \cf8 // inorder traversal, pre-increment\cf3 \
    Set_iterator \cf5 operator\cf3 ++(\cf6 int\cf3 ); \cf8 // inorder traversal, post-increment\cf3 \
    Comparable & \cf5 operator\cf3 *() \{ \cf5 return\cf3  current->element; \}\
\
\cf5 protected\cf3 :\
    BinaryNode * current;\
\
    \cf5 friend\cf3  \cf6 class\cf3  Set<Comparable>;\
\};\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 typename\cf3  Set<Comparable>::iterator Set<Comparable>::find(\cf6 const\cf3  Comparable & x, BinaryNode * t) \cf6 const\cf3 \
\{\
    \cf5 if\cf3  (t == \cf4 nullptr\cf3 )\
        \cf5 return\cf3  iterator\{\}; \cf8 // return nullptr; also works, note constructor for return type\cf3 \
    \cf5 else\cf3  \cf5 if\cf3  (x < t->element)\
        \cf5 return\cf3  find(x, t->left);\
    \cf5 else\cf3  \cf5 if\cf3  (x > t->element)\
        \cf5 return\cf3  find(x, t->right);\
    \cf5 else\cf3 \
        \cf5 return\cf3  iterator\{t\}; \cf8 // return t; also works\cf3 \
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
Set_iterator<Comparable> Set_iterator<Comparable>::\cf5 operator\cf3 ++(\cf6 int\cf3 ) \cf8 // inorder traversal, post-increment\cf3 \
\{\
    Set_iterator<Comparable> clone(*\cf5 this\cf3 );\
    ++(*\cf5 this\cf3 );\
    \cf5 return\cf3  clone;\
\}\
\cf8 //------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
Set_iterator<Comparable> & Set_iterator<Comparable>::\cf5 operator\cf3 ++() \cf8 // inorder traversal, pre-increment\cf3 \
\{\
    \cf5 if\cf3  (current->right) \{ \cf8 // if right child exists, left slide from right child\cf3 \
        current = current->right;\
\cf5 while\cf3  (current->left)\
            current = current->left;\
    \} \cf5 else\cf3  \{\
        BinaryNode * child = current;\
        current = current->parent;\
        \cf5 while\cf3  (current && current->right == child) \{\
            \cf8 // coming up from the right child, don't visit the parent\cf3 \
            child = current;\
            current = current->parent;\
        \}\
    \}\
    \cf5 return\cf3  *\cf5 this\cf3 ;\
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0
\cb10 \}\cb1 \
\
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0
\cf2 #endif\cf3 \
}