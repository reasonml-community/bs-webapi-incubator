var fs = require('fs');
var files = process.argv.slice(2);

files.forEach(function(file) {
  var content = fs.readFileSync(file, {encoding: 'utf-8'});
  content = content.replace(/t\[@@nonrec \]/g, 't');
  if (file === 'src/fetch/fetchRe.ml') {
    content = content.replace('method =', '_method =');
  }
  fs.writeFileSync(file, content, {encoding: 'utf-8'});
});
