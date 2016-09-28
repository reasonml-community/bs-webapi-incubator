set -e

esc=$(printf '\033')
checkmark="${esc}[32m✔${esc}[0m";
crossmark="${esc}[31m✔${esc}[0m";

thisDir=$(dirname "$0")
expected=`cat $thisDir/fixture.js`
actual=`cat $thisDir/test.js`

if [[ "$expected" = "$actual" ]]; then
  echo "$checkmark  test.js looks like the expected output (fixture.js)."
else
  echo "$crossmark  Wrong"
  diff -u $thisDir/fixture.js $thisDir/test.js
  exit 1
fi
