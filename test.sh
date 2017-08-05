make
red=$(tput setaf 1)
green=$(tput setaf 2)
yellow=$(tput setaf 3)
blue=$(tput setaf 4)
magenta=$(tput setaf 5)
cyan=$(tput setaf 6)
white=$(tput setaf 7)
normal=$(tput sgr0)
export ARG=`ruby -e "puts (1..${1-10}).to_a.shuffle.join(' ')"`
printf "${ARG}\n"
export LST=`./push_swap $ARG`
##printf "$LST"
printf "${LST}" | tr '\n' ' ' | sed "s/rra/${yellow}rra${normal}/g" | sed "s/rrb/${blue}rrb${normal}/g" \
| sed "s/ ra/${green} ra${normal}/g" | sed "s/ rb/${cyan} rb${normal}/g" | sed "s/pa/${magenta}pa${normal}/g" \
			 | sed "s/pb/${red}pb${normal}/g" | sed "s/sa/${magenta}sa${normal}/g"
