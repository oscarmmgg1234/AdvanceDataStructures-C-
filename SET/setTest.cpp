{\rtf1\ansi\ansicpg1252\cocoartf2513
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red99\green226\blue255;\red251\green30\blue255;\red0\green0\blue0;
\red235\green239\blue24;\red128\green255\blue167;\red254\green215\blue216;\red50\green244\blue241;}
{\*\expandedcolortbl;;\cssrgb\c44518\c90662\c100000;\cssrgb\c100000\c29678\c100000;\csgray\c0;
\cssrgb\c93803\c93590\c10850;\cssrgb\c55755\c100000\c71263;\cssrgb\c100000\c87709\c87701;\cssrgb\c19571\c95778\c95688;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs22 \cf2 \CocoaLigature0 #include \cf3 <iostream>\cf4 \
\
\cf2 #include \cf3 "Set.h"\cf4 \
\
\cf5 using\cf4  \cf6 namespace\cf4  std;\
\
\cf6 int\cf4  main()\
\{\
    Set<\cf6 int\cf4 > tree;\
    Set<\cf6 int\cf4 >::iterator i;\
    \cf6 int\cf4  n;\
\
    tree.insert(\cf3 100\cf4 );\
    tree.insert(\cf3 50\cf4 );\
    tree.insert(\cf3 110\cf4 );\
    tree.insert(\cf3 40\cf4 );\
    tree.insert(\cf3 75\cf4 );\
    tree.insert(\cf3 30\cf4 );\
    tree.insert(\cf3 60\cf4 );\
    tree.insert(\cf3 80\cf4 );\
    tree.insert(\cf3 55\cf4 );\
    tree.insert(\cf3 90\cf4 );\
    tree.insert(\cf3 59\cf4 );\
    tree.insert(\cf3 57\cf4 );\
    tree.insert(\cf3 56\cf4 );\
    tree.insert(\cf3 58\cf4 );\
\
    tree.printTree();\
    cout << \cf3 "Iterate Over and Print Elements\cf7 \\n\cf3 "\cf4 ;\
    \cf5 for\cf4  (i = tree.begin(); i != tree.end(); i++)\
        cout << *i << \cf3 " "\cf4 ;\
    cout << endl;\
\
    \cf8 //Set<int> copy(tree); // save a copy\cf4 \
    cin >> n;\
    \cf5 while\cf4  (n >= \cf3 0\cf4 ) \{\
        i = tree.find(n);\
        tree.erase(i);\
        \cf8 //tree.erase(n); // test the other erase()\cf4 \
\
        tree.printTree();\
        cout << \cf3 "Iterate Over and Print Elements\cf7 \\n\cf3 "\cf4 ;\
        \cf5 for\cf4  (i = tree.begin(); i != tree.end(); i++)\
            cout << *i << \cf3 " "\cf4 ;\
        cout << endl;\
\
        \cf8 //tree = copy; // restore original tree\cf4 \
        cin >> n;\
    \}\
\}}