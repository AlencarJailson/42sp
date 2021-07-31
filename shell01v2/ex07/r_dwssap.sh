cat /etc/passwd | \
awk -F ':' '{print $1}' | \
sed -n 'n;p' | \
rev | \
sort -dr | \
sed -n ""$FT_LINE1","$FT_LINE2"p" | \
sed 's/$/, /' | \
tr -d '\n' |\
sed -r 's/(.*), /\1./'