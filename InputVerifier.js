function readLine() {
  return inputString[currentLine++];
}
function makeInputVerifier(minimum, maximum) {
     function verify(input)
     {
    
         if(input<minimum)
            return ("Input is less than minimum value");
         if(input>=minimum&&input<=maximum)
            return ("Input is in range");
         if(input>maximum)
            return ("Input is more than maximum value");
         else
           return;  
}
  
  return verify;
  //write your code here
}
function main() {
  const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

  const min = parseInt(readLine().trim());
  const max = parseInt(readLine().trim());
  const verify = makeInputVerifier(min, max);
    
  const input = parseInt(readLine().trim());
  const result = verify(input);

  ws.write(`${result}\n`);
  ws.end();
}
