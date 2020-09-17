{\rtf1\ansi\ansicpg1252\cocoartf2513
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red50\green244\blue241;\red0\green0\blue0;\red251\green30\blue255;
\red99\green226\blue255;\red128\green255\blue167;\red235\green239\blue24;\red224\green228\blue9;\red19\green150\blue163;
}
{\*\expandedcolortbl;;\cssrgb\c19571\c95778\c95688;\csgray\c0;\cssrgb\c100000\c29678\c100000;
\cssrgb\c44518\c90662\c100000;\cssrgb\c55755\c100000\c71263;\cssrgb\c93803\c93590\c10850;\cssrgb\c90000\c90000\c0;\cssrgb\c0\c65000\c70000;
}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs22 \cf2 \CocoaLigature0 //Oscar Maldonado\cf3 \
\cf2 //\cf4 005487270\cf3 \
\cf2 //\cf5 0\cf4 4\cf2 /\cf4 10\cf2 /\cf4 2019\cf3 \
\cf2 //LAB02 pt1\cf3 \
\cf2 //time the exec times of selectionSort\cf3 \
\
\cf5 #include \cf4 <iostream>\cf3 \
\cf5 #include \cf4 <vector>\cf3 \
\cf5 #include \cf4 <cstdlib>\cf3 \
\
\
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0
\cf6 void\cf3  selectionSort(std::vector<\cf6 int\cf3 >& v)\
\{\
\cf7 for\cf3  (\cf6 int\cf3  i = \cf4 0\cf3 ; i < v.\cb8 size\cb1 () - \cf4 1\cf3 ; i++)\
    \cf7 for\cf3  (\cf6 int\cf3  j = i+\cf4 1\cf3 ; j < v.\cb8 size\cb1 () ; j++)\
        \cf7 if\cf3  (v[i] > v[j])\
           std:: swap(v[i], v[j]);\
\
\
\}\
\
\
\cf6 int\cf3  main()\
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0
\cb9 \{\cb1 \
\
\
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0
\cf6 int\cf3  n;\
std::vector<\cf6 int\cf3 > exp;\
std::cin>>n;\
\cf7 for\cf3 (\cf6 int\cf3  i = \cf4 0\cf3 ;i < n;i++)\
\{ exp.push_back(rand()%\cf4 1000000\cf3 );\
\}\
selectionSort(exp);\
\
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0
\cb9 \}}