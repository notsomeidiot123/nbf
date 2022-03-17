echo "compiling..."
g++ bf.cpp -o nbf
echo "installing..."
sudo mv nbf /usr/bin/nbf
echo "installed";
echo "run nbf -h to see list of options, or nbf [file] to run bf file"
cd ..