var n,i,j,mini:longint; min,d: extended;
a:array[1..106] of record x,y:integer; end;

begin
assign(input,'A.in');reset(input);
assign(output,'A.out');rewrite(output);
readln(n);
for i:=1 to n do readln(a[i].x,a[i].y);

for i:=1 to n do
begin
        min:=100000; mini:=-1;
	for j:=1 to n do
	if j<>i then  begin
                d:=sqrt(sqr(a[i].x-a[j].x)+sqr(a[i].y-a[j].y));
                if d<min then begin min:=d; mini:=j; end;
                end;
        write(mini,' ');
end;

close(input); close(output); end.
