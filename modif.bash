for rep in $*
do
  cat $rep | sed "s/ft_/my_/g" > tmp;
  cat tmp > $rep;
  tmp=$(ls $rep | sed "s/ft_/my_/g");
  mv $rep $tmp;
  rm -f tmp;
done