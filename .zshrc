alias norma='norminette -R CheckForbiddenSourceHeader'
alias ll='ls -la'
alias up='cd ..'
alias tree="find . -print | sed -e 's;[^/]*/;|____;g;s;____|; |;g'"
alias gccf="gcc -Wall -Wextra -Werror"
alias ccf="cc -Wall -Wextra -Werror"
alias gitall="git ls-tree -r master --name-only"
export ZSH=$HOME/.oh-my-zsh
export MAIL='mburakow@student.hive.fi'
ZSH_THEME="robbyrussell"
plugins=(git)
source $ZSH/oh-my-zsh.sh
