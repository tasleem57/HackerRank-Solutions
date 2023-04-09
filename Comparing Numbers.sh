read NUMBER1
read NUMBER2
if [ "$NUMBER1" -gt "$NUMBER2" ]; then
    echo X is greater than Y
elif [ "$NUMBER1" -lt "$NUMBER2" ]; then
    echo X is less than Y
else
    echo X is equal to Y
fi
