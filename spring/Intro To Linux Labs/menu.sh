# Present the menu
echo "
SUNY Orange File Manager
C)hange into a directory
L)ist the files in the current directory
M)ove a file
K)opy a file
P)rint the contents of a file
"

# Read input from user
read userCommand

# Ask for path based on choice and validate data
alias c='cd' l='ls'
if [[ $userCommand = [CclL] ]]
then
    echo "What is the directory path"
elif [[ $userCommand = [pP] ]]
then
    echo "What is the file path"
elif [[ $userCommand = [mMkK] ]]
then
    echo "What is the source file path"
else
    echo "$userCommand is not a valid choice"
    exit
fi

# Ask for path
read path

# Run command or ask for target path
if [[ $userCommand != [mMkK] ]]
then
    eval $userCommand $path
    exit
else
    echo "What is the target file path"
fi

read targetPath

eval $userCommand $path $targetPath