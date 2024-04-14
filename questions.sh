pwd
mkdir ~/Desktop/HomeworkQuestions && cd ~/Desktop/HomeworkQuestions
echo -e "\n"

#Q1 Print calendar of next month in a file.
# Ans1

echo -e "Output for Q1 is as follows:\n"
n=`date +%m`
n=`expr $n - 1`
cal $n 2022

echo -e "\n"

# Q2 Count the number of files in downloads folder.

# Ans2

echo -e "Output for Q2 is as follows:\n"
echo -e "Number of files in downloads folder:"
cd ../Downloads
touch help.txt hi.txt hello python.py
ls | wc -l

echo -e "\n"


# Q3 Count the total number of txt file in download desktop and documents.

# Ans3
echo "Output for Q3 is as follows:\n"
echo -e "Number of txt files in Desktop"
touch hehe pls.txt op hello.o hello1.txt hello2.txt
ls *.txt | wc -l
echo "\n"
cd ../Documents
touch hey.txt hi happy.py ping.txt
echo -e "Number of txt files in Documents"
ls *.txt | wc -l
echo "\n"
cd ../Downloads
touch Happy hello.py Gn.txt
echo -e "Number of txt files in Downloads"
ls *.txt | wc -l

#  moving to desktop
cd ../Desktop/HomeworkQuestions

# Q4 Rename every file in Desktop folder with today's date as suffix.

# Ans4
echo "Output for Q4 is as follows:\n"

mkdir Q4 && cd Q4
touch f1 f2 f3 f4
n=`date +%d`
for i in `ls`
do
mv $n $i$n
echo $i$n
done

echo "\n"

# Q5 Modify Q4 such that it only works for 1st three files.

# Ans5
echo "Output for Q5 is as follows:\n"

cd ..
mkdir Q5 && cd Q5
touch f15 f3 f5 f8 f9 f0
a=1
for i in `ls`
do
n=`date +%d`
if [ $a -le 1 ]
then
mv $i $i$a
fi
a=`expr $j + 1`
echo $j
done

echo "\n"

# Q6 Modify Q4 such that it only works for files starting with a.

#Ans6
echo "Output for Q6 is as follows:\n"

cd ..
mkdir Q6 && cd Q6
touch aa1 sdfrf a232 f4 f6
d=`date +%d`
for i in `ls a*`
do
mv $i $i"_"$d
done

echo "\n"

# Q7 Rename every cpp file in your desktop with date suffix and c extension.

# Ans7
echo "Output for Q7 is as follows:\n"

cd ..
mkdir Q7 && cd Q7
touch help.cpp hello.cpp ping.cpp haha.cpp
for i in `ls *.cpp`
do
n=`date +%d`
m="${i%.*}"
e="${i##*.}"
mv $i $m$n" .c"
done