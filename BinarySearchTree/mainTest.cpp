{\rtf1\ansi\ansicpg1252\cocoartf2513
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red99\green226\blue255;\red251\green30\blue255;\red0\green0\blue0;
\red235\green239\blue24;\red128\green255\blue167;\red50\green244\blue241;\red254\green215\blue216;}
{\*\expandedcolortbl;;\cssrgb\c44518\c90662\c100000;\cssrgb\c100000\c29678\c100000;\csgray\c0;
\cssrgb\c93803\c93590\c10850;\cssrgb\c55755\c100000\c71263;\cssrgb\c19571\c95778\c95688;\cssrgb\c100000\c87709\c87701;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs22 \cf2 \CocoaLigature0 #include \cf3 "BiSearchh.h"\cf4 \
\cf5 using\cf4  \cf6 namespace\cf4  std;\
\cf7 /*\cf4 \
\cf7  * Oscar Maldonado\cf4 \
\cf7  * LAB07\cf4 \
\cf7  * CSE330\cf4 \
\cf7  * BinarySearchTree\cf4 \
\cf7  *\cf4 \
\cf7  * description:\cf4 \
\cf7  *\cf4 \
\cf7  * In this lab we are going to create a binarysearchTree and we going to create way to insert and remove and find max/min and keep it a O(logN)\cf4 \
\cf7  *\cf4 \
\cf7  */\cf4 \
\
\cf6 int\cf4  main()\
\{\
\
    BinarySearchTree<\cf6 int\cf4 > complete_tree;\
\
    complete_tree.insert(\cf3 20\cf4 );\
    complete_tree.insert(\cf3 10\cf4 );\
    complete_tree.insert(\cf3 30\cf4 );\
    complete_tree.insert(\cf3 35\cf4 );\
    complete_tree.insert(\cf3 25\cf4 );\
    complete_tree.insert(\cf3 5\cf4 );\
    complete_tree.insert(\cf3 15\cf4 );\
    complete_tree.printTree();\
\
    cout << \cf3 "Inorder Traversal\cf8 \\n\cf3 "\cf4 ;\
    complete_tree.inorder();\
    cout << endl;\
\
      cout << \cf3 "Postorder Traversal\cf8 \\n\cf3 "\cf4 ;\
    complete_tree.postorder();\
    cout << endl;\
\
    cout << \cf3 "Preorder Traversal\cf8 \\n\cf3 "\cf4 ;\
    complete_tree.preorder();\
    cout << endl;\
\
\
\cf5 return\cf4  \cf3 0\cf4 ;\
\
\}}