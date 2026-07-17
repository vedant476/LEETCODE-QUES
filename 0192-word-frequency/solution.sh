# Read from the file words.txt and output the word frequency list to stdout.

cat words.txt | tr -s " " "\n" | sort | uniq -c | sort -nr  | while read count word
do
printf "%s %i\n" "$word" "$count"
done