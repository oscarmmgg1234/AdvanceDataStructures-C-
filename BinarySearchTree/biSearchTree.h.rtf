{\rtf1\ansi\ansicpg1252\cocoartf2513
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red99\green226\blue255;\red0\green0\blue0;\red251\green30\blue255;
\red50\green244\blue241;\red128\green255\blue167;\red235\green239\blue24;\red254\green215\blue216;}
{\*\expandedcolortbl;;\cssrgb\c44518\c90662\c100000;\csgray\c0;\cssrgb\c100000\c29678\c100000;
\cssrgb\c19571\c95778\c95688;\cssrgb\c55755\c100000\c71263;\cssrgb\c93803\c93590\c10850;\cssrgb\c100000\c87709\c87701;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs22 \cf2 \CocoaLigature0 #ifndef BISEARCH_H\cf3 \
\cf2 #define BISEARCH_H\cf3 \
\
\
\cf2 #include \cf4 <iostream>\cf3 \
\cf2 #include \cf4 <string>\cf3 \
\
\cf5 /*\cf3 \
\cf5  * Oscar Maldonado\cf3 \
\cf5  * LAB07\cf3 \
\cf5  * CSE330\cf3 \
\cf5  * BinarySearchTree\cf3 \
\cf5  *\cf3 \
\cf5  * description:\cf3 \
\cf5  *\cf3 \
\cf5  * In this lab we are going to create a binarysearchTree and we going to create way to insert and remove and find max/min and keep it a O(logN)\cf3 \
\cf5  *\cf3 \
\cf5  */\cf3 \
\
\
\
\
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 class\cf3  BinarySearchTree\
\{\
\cf7 public\cf3 :\
    BinarySearchTree(): root\{\cf4 nullptr\cf3 \} \{ \}\
    BinarySearchTree(\cf6 const\cf3  BinarySearchTree & rhs) \{ root = clone(rhs.root); \}\
    BinarySearchTree(BinarySearchTree && rhs);\
    ~BinarySearchTree() \{ makeEmpty(root); \}\
    BinarySearchTree & \cf7 operator\cf3 =(\cf6 const\cf3  BinarySearchTree & rhs);\
    BinarySearchTree & \cf7 operator\cf3 =(BinarySearchTree && rhs);\
\
    \cf6 const\cf3  Comparable & findMin() \cf6 const\cf3 ;\
    \cf6 const\cf3  Comparable & findMax() \cf6 const\cf3 ;\
    \cf6 bool\cf3  contains(\cf6 const\cf3  Comparable & x) \cf6 const\cf3 ;\
    \cf6 bool\cf3  isEmpty() \cf6 const\cf3  \{ \cf7 return\cf3  root == \cf4 nullptr\cf3 ; \}\
    \cf6 void\cf3  printTree(std::ostream & out = std::cout) \cf6 const\cf3 ;\
\
    \cf6 void\cf3  makeEmpty() \{ makeEmpty(root); \}\
    \cf6 void\cf3  insert(\cf6 const\cf3  Comparable & x) \{ insert(x, root); \}\
    \cf6 void\cf3  insert(Comparable && x) \{ insert(std::move(x), root); \}\
    \cf6 void\cf3  remove(\cf6 const\cf3  Comparable & x) \{ remove(x, root); \}\
    \cf6 void\cf3  inorder() \cf6 const\cf3  \{ inorder(root); \}\
    \cf6 void\cf3  preorder() \cf6 const\cf3  \{preorder(root);\}\
    \cf6 void\cf3  postorder() \cf6 const\cf3  \{postorder(root);\}\
\
\cf7 private\cf3 :\
    \cf6 struct\cf3  BinaryNode\
    \{\
        Comparable element;\
        BinaryNode * left;\
        BinaryNode * right;\
\
        BinaryNode(\cf6 const\cf3  Comparable & theElement, BinaryNode * lt, BinaryNode * rt):\
                element\{theElement\}, left\{lt\}, right\{rt\} \{ \}\
        BinaryNode(Comparable && theElement, BinaryNode * lt, BinaryNode * rt):\
                element\{std::move(theElement)\}, left\{lt\}, right\{rt\} \{ \}\
    \};\
\
    BinaryNode * root;\
\
    \cf6 void\cf3  insert(\cf6 const\cf3  Comparable & x, BinaryNode * & t);\
    \cf6 void\cf3  insert(Comparable && x, BinaryNode * & t);\
    \cf6 void\cf3  remove(\cf6 const\cf3  Comparable & x, BinaryNode * & t);\
    BinaryNode * findMin(BinaryNode * t) \cf6 const\cf3 ;\
    BinaryNode * findMax(BinaryNode * t) \cf6 const\cf3 ;\
    \cf6 bool\cf3  contains(\cf6 const\cf3  Comparable & x, BinaryNode * t) \cf6 const\cf3 ;\
    \cf6 void\cf3  makeEmpty(BinaryNode * & t);\
    \cf6 void\cf3  printTree(std::ostream & out, BinaryNode * t, std::string indent, \cf6 const\cf3  std::string & tag) \cf6 const\cf3 ; \cf5 // added indent and tag\cf3 \
    BinaryNode * clone(BinaryNode * t) \cf6 const\cf3 ;\
    \cf6 void\cf3  inorder(BinaryNode * t) \cf6 const\cf3 ;\
    \cf6 void\cf3  postorder(BinaryNode* t) \cf6 const\cf3 ;\
    \cf6 void\cf3  preorder(BinaryNode* t) \cf6 const\cf3 ;\
\};\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
BinarySearchTree<Comparable>::BinarySearchTree(BinarySearchTree && rhs)\
\{\
    root = rhs.root; \cf5 // root = move(rhs.root); is not necessary since root is a pointer (primitive type)\cf3 \
    rhs.root = \cf4 nullptr\cf3 ;\
\}\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
BinarySearchTree<Comparable> & BinarySearchTree<Comparable>::\cf7 operator\cf3 =(\cf6 const\cf3  BinarySearchTree & rhs)\
\{\
    BinarySearchTree copy = rhs; \cf5 // uses copy constructor\cf3 \
    swap(*\cf7 this\cf3 , copy);\
    \cf7 return\cf3  *\cf7 this\cf3 ;\
\}\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
BinarySearchTree<Comparable> & BinarySearchTree<Comparable>::\cf7 operator\cf3 =(BinarySearchTree && rhs)\
\{\
    swap(root, rhs.root);\
    \cf7 return\cf3  *\cf7 this\cf3 ;\
\}\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 void\cf3  BinarySearchTree<Comparable>::printTree(std::ostream & out, BinaryNode * t, std::string indent, \cf6 const\cf3  std::string & tag) \cf6 const\cf3 \
\{\
    \cf7 if\cf3  (t == \cf4 nullptr\cf3 )\
        \cf7 return\cf3 ;\
\
    out << indent << tag << t->element << std::endl;\
    indent += \cf4 "    "\cf3 ;\
    printTree(out, t->left, indent, \cf4 "L "\cf3 );\
    printTree(out, t->right, indent, \cf4 "R "\cf3 );\
\}\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 void\cf3  BinarySearchTree<Comparable>::printTree(std::ostream & out) \cf6 const\cf3 \
\{\
    std::cout << \cf4 "Print Tree\cf8 \\n\cf4 "\cf3 ;\
    printTree(out, root, \cf4 ""\cf3 , \cf4 ""\cf3 );\
\}\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 void\cf3  BinarySearchTree<Comparable>::inorder(BinaryNode * t) \cf6 const\cf3 \
\{\
    \cf7 if\cf3  (t == \cf4 nullptr\cf3 )\
        \cf7 return\cf3 ;\
\
    inorder(t->left);\
\
    std::cout << t->element << \cf4 " "\cf3 ;\
   inorder(t->right);\
\}\
\cf6 void\cf3  BinarySearchTree<Comparable>::preorder(BinaryNode * t) \cf6 const\cf3 \
\{\
    \cf7 if\cf3  (t == \cf4 nullptr\cf3 )\
        \cf7 return\cf3 ;\
 std::cout << t->element << \cf4 " "\cf3 ;\
    preorder(t->left);\
\
\
   preorder(t->right);\
\}\
\cf6 void\cf3  BinarySearchTree<Comparable>::postorder(BinaryNode * t) \cf6 const\cf3 \
\{\
    \cf7 if\cf3  (t == \cf4 nullptr\cf3 )\
        \cf7 return\cf3 ;\
\
    postorder(t->left);\
\
\
   postorder(t->right);\
std::cout << t->element << \cf4 " "\cf3 ;\
\}\
\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
    \cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 bool\cf3  BinarySearchTree<Comparable>::contains(\cf6 const\cf3  Comparable &x) \cf6 const\cf3  \cf5 //\cf3 \
\{\
    \cf7 return\cf3  contains(x,root);\
\}\
\cf5 //-------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 bool\cf3  BinarySearchTree<Comparable>::contains(\cf6 const\cf3  Comparable &x, BinarySearchTree<Comparable>::BinaryNode *t) \cf6 const\cf3 \
\{\
    \cf7 if\cf3 (t == \cf4 nullptr\cf3 )\
    \{\
        \cf7 return\cf3  \cf4 false\cf3 ;\
    \}\
    \cf7 else\cf3  \cf7 if\cf3 (x < t->element)\
        \cf7 return\cf3  contains(x,x->left);\
    \cf7 else\cf3  \cf7 if\cf3 (t->element < x)\
        \cf7 return\cf3  contains(x,t->right);\
    \cf7 else\cf3 \
        \cf7 return\cf3  \cf4 true\cf3 ;\
\}\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 void\cf3  BinarySearchTree<Comparable>::insert(\cf6 const\cf3  Comparable& x,BinaryNode*& t)\
\{\
\cf7 if\cf3 (t == \cf4 nullptr\cf3 )\
    t = \cf7 new\cf3  BinaryNode\{x, \cf4 nullptr\cf3 , \cf4 nullptr\cf3 \};\
    \cf7 else\cf3  \cf7 if\cf3 (x < t->element)\
        insert (x,x->left);\
    \cf7 else\cf3  \cf7 if\cf3 (t->element < x)\
        insert(x,t->right);\
    \cf7 else\cf3 \
        ;\
\
\}\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 void\cf3  BinarySearchTree<Comparable>::insert(Comparable&& x,BinaryNode*& t)\
\{\
    \cf7 if\cf3 (t == \cf4 nullptr\cf3 )\
        t = \cf7 new\cf3  BinaryNode\{std::move(x),\cf4 nullptr\cf3 ,\cf4 nullptr\cf3 \};\
\cf7 else\cf3  \cf7 if\cf3 (x < t->element)\
    insert(std::move(x),t->left);\
\cf7 else\cf3  \cf7 if\cf3 (t->element < x)\
    insert(std::move(x),t->right);\
\cf7 else\cf3 \
    ;\
\}\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 typename\cf3  BinarySearchTree<Comparable>::BinaryNode* findMin( \cf6 typename\cf3  BinarySearchTree<Comparable>::BinaryNode* t)\
\{\
    \cf7 if\cf3 (t == \cf4 nullptr\cf3 )\
        \cf7 return\cf3  \cf4 nullptr\cf3 ;\
    \cf7 if\cf3 (t->left == \cf4 nullptr\cf3 )\
        \cf7 return\cf3  t;\
    \cf7 return\cf3   findMin(t->left);\
\}\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  Comparable>\
\cf6 typename\cf3  BinarySearchTree<Comparable>::BinaryNode* findMax( \cf6 typename\cf3  BinarySearchTree<Comparable>::BinaryNode* t)\
\{\
    \cf7 if\cf3 (t == \cf4 nullptr\cf3 )\
        \cf7 return\cf3  \cf4 nullptr\cf3 ;\
    \cf7 if\cf3 (t->right == \cf4 nullptr\cf3 )\
        \cf7 return\cf3  t;\
    \cf7 return\cf3   findMax(t->right );\
\}\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  obj>\
\cf6 void\cf3  BinarySearchTree<obj>::remove(\cf6 const\cf3  obj &x, BinarySearchTree<obj>::BinaryNode *&t)\
\{\
    \cf7 if\cf3 (t == \cf4 nullptr\cf3 )\
        \cf7 return\cf3 ;\
    \cf7 if\cf3 (x < t->left)\
        remove(x,t->left);\
    \cf7 else\cf3  \cf7 if\cf3 (t->element < x)\
        remove(x,t->right);\
    \cf7 else\cf3  \cf7 if\cf3  (t->left != \cf4 nullptr\cf3  && t->right != \cf4 nullptr\cf3 )\
    \{\
        t->element = findMin(t->right)->element;\
        remove(t->element,t->right);\
    \}\
    \cf7 else\cf3 \
    \{\
        BinaryNode* oldNode = t;\
        t = (t->left != \cf4 nullptr\cf3 ) ? t->left : t->right;\
        \cf7 delete\cf3  oldNode;\
    \}\
\}\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  obj>\
\cf6 void\cf3  BinarySearchTree<obj>::makeEmpty(BinarySearchTree<obj>::BinaryNode *&t)\
\{\
    \cf7 if\cf3 (t != \cf4 nullptr\cf3 )\
    \{\
        makeEmpty(t->left);\
        makeEmpty(t->right);\
        \cf7 delete\cf3  t;\
    \}\
    t = \cf4 nullptr\cf3 ;\
\}\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf6 template\cf3  <\cf6 typename\cf3  obj>\
\cf6 typename\cf3  BinarySearchTree<obj>::BinaryNode * BinarySearchTree<obj>::clone(BinarySearchTree<obj>::BinaryNode *t) \cf6 const\cf3 \
\{\
    \cf7 if\cf3 (t == \cf4 nullptr\cf3 )\
        \cf7 return\cf3  \cf4 nullptr\cf3 ;\
    \cf7 else\cf3 \
        \cf7 return\cf3  \cf7 new\cf3  BinaryNode\{t->element,clone(t->left), clone(t->right)\};\
\}\
\cf5 //----------------------------------------------------------------------------------------------------------------------\cf3 \
\cf2 #endif\cf3 \
}