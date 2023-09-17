touch record 
i=1
pp=(opss it looks like it is  worng path good bye)
px=(you should go to another room)
y=3
function die()
{
((y=y-1))

if((y!=0))
then
echo "now you become $y in the room" 
echo ${px[@]}
fi

}
function ex()
{
echo "
█▀▀ ▄▀█ █▀▄▀█ █▀▀   █▀█ █░█ █▀▀ █▀█
█▄█ █▀█ █░▀░█ ██▄   █▄█ ▀▄▀ ██▄ █▀▄
"
i=0
}
function room1()
{
while((i==1))
do
read -p "now you are in room 1 you have 2 option 1.left or 2.right 
" x
if (($x==1))
then
echo "rigth path"
room2
elif(($x==2))
then
echo ${pp[@]}
die
echo "you died in room 1" > record 
if((y!=0))
then 
room2
else
ex
fi
else 
echo "worng option "

fi
done
} 
function room2()
 {
 while((i==1))
do
 read -p "now you are in  room 2 you have 2 option 1.left or 2.strigh 
  " x
if (($x==2))
then
echo "rigth path
"
room3
elif(($x==1))
then
echo ${pp[@]}
die 
echo "you died in room 2" >> record 
if((y!=0))
then 
room3
else
ex
fi
else
echo "worng option"
 fi
 done
 }
  function room3()
 {
 while((i==1))
do
 read -p "now you are in room 3 you have 2 option 1.strigh  or 2.right 
 " x
if (($x==2))
then
echo "rigth path
"
room4
elif(($x==1))
then
echo ${pp[@]}
die 
echo "you die in room 3" >> record 
if((y!=0))
then 
room4
else
ex
fi
else
echo "worng option"
fi
done
 }
  function room4()
 {
 while((i==1))
do
 read -p "now you are in room 4 you have 2 option 1.straight  or 2.right
  " x
if (($x==1))
then
echo "rigth path
"
room5
elif(($x==2))
then
echo ${pp[@]}
die 
echo "you died in room 4" >> record 
if(($y!=0))
then 
room5
else
ex
fi
else
echo "worng option"
fi
done
 }
 function room5()
 {
 while((i==1))
do
 read -p "now you are in room 5 you have 2 option 1.straight or 2.right 
 " x
if (($x==2))
then
echo "rigth path
"
room6
elif(($x==1))
then
echo ${pp[@]}
die 
echo "you die in room 5" >> record 
if((y!=0))
then 
room6
else
ex
fi
else
echo "worng option"
fi
done
}
 function room6()
 {
 while((i==1))
do
 read -p "now you are in room 6 you have 2 option 1.strigh  or 2.right 
 " x
if (($x==1))
then
echo "rigth path
"
room7
elif(($x==2))
then
echo ${pp[@]}
die 
echo "you died in room 6" >> record 
if((y!=0))
then 
room7
else
ex
fi
else
echo "worng option please choose 1 or 2"
fi
done
}
function room7()
 {
 while((i==1))
do
 read -p "now you are in room 7 you have 2 option 1.right  or 2.light 
 " x
if (($x==1))
then
echo "rigth path
"
room8
elif(($x==2))
then
echo ${pp[@]}
die 
echo "you died in room 7" >> record 
if((y!=0))
then 
room8
else
ex
fi
else
echo "worng option "

fi
done
 }
 function room8()
 
 {



echo "ℂ𝕠𝕟𝕘𝕣𝕒𝕥𝕦𝕝𝕒𝕥𝕚𝕠𝕟𝕤, $y 𝕠𝕗 𝕪𝕠𝕦 𝕞𝕒𝕕𝕖 𝕚𝕥 𝕥𝕠 𝕥𝕙𝕖 𝕖𝕟𝕕"
i=0

 }
 printf "


███╗░░░███╗░█████╗░███████╗███████╗  ░██████╗░░█████╗░███╗░░░███╗███████╗
████╗░████║██╔══██╗╚════██║██╔════╝  ██╔════╝░██╔══██╗████╗░████║██╔════╝
██╔████╔██║███████║░░███╔═╝█████╗░░  ██║░░██╗░███████║██╔████╔██║█████╗░░
██║╚██╔╝██║██╔══██║██╔══╝░░██╔══╝░░  ██║░░╚██╗██╔══██║██║╚██╔╝██║██╔══╝░░
██║░╚═╝░██║██║░░██║███████╗███████╗  ╚██████╔╝██║░░██║██║░╚═╝░██║███████╗
╚═╝░░░░░╚═╝╚═╝░░╚═╝╚══════╝╚══════╝  ░╚═════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚══════╝
 \n "
 
 read -p " do you wana play press 1 or press any key to exit  
  " c
 case $c in 
 1)
echo "you wake up with 2 people in a room and you  have only two doors in the room 
and you should escape from this room 
each door leads to another room 
the Building have 9 rooms
if you choose the wrong door whoever opens this door will die 


hint : what is the area of square .


 "
 room1
 gedit record
 ;;
 *)
 echo " **** " 
  ;;
 esac
 

