wget -O .git-commit-log-tmp.txt http://172.22.102.206/attachments/download/12904/.git-commit-log-tmp.txt

if [ $HOME != $PWD ]; then
	cp -f .git-commit-log-tmp.txt ~/.git-commit-log-tmp.txt
	rm -rf .git-commit-log-tmp.txt
fi
	
git config --global commit.template  ~/.git-commit-log-tmp.txt
git config --global core.editor vim