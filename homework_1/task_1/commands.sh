#!/bin/sh

echo -n "1. Line count of the 'data.dat' file: "
wc -l < ./data.dat
echo -n "2. Line count which contains \"dolor\" or \"dalor\": "
grep -e " dolor " -e "dalor" < data.dat | wc -l
echo -n "3. Word count of the 'data.dat' file: "
wc -w < ./data.dat
echo -n "4. Word count which starts with 'mol': "
grep " mol*" < data.dat | wc -l
echo -n "5. File count of the files with '.txt' extension: "
ls test_folder | grep ".*txt" | wc -l