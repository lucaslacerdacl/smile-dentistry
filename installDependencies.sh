git clone https://github.com/LucasLacerdaCL/date.git
echo "Create external folder"
mkdir external
echo "Move Date package to dependencies folder"
mv ./date ./external
echo "Build the project"
rm -rf ./date
cd src
g++ main.cpp -o main.exe