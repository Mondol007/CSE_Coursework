x = [-8, 6, 1, 0, 4, 0, 0]
xx = [-2, -1, 0, 1, 2, 3, 4]
h = [0, 0, -3, 9, 0, 1, 7]
hy = [-2, -1, 0, 1, 2, 3, 4]

add=x+h;
figure(1)
subplot(2,2,1)
stem(xx,add,'r');
axis([-2 4 -10 10])
grid on;
legend('add')


sub = zeros(1, 7);
for i=1:7
  sub(i) = x(i) - h(i);
end
subplot(2,2,2);
stem(xx,sub,'b');
axis([-2 4 -10 10])
grid on;
legend('sub')


mul = zeros(1, 7);
for i=1:7
  mul(i) = x(i) * h(i);
end
subplot(2,2,3);
stem(xx,mul,'g');
axis([-2 4 -10 10])
grid on;
legend('mult')


k = 2.5
g = k*x;
subplot(2,2,4);
stem(xx,g,'y');
axis([-2 4 -20 20])
grid on;
legend('scaling')

figure(2)
subplot(2,2,1)
plot(xx,add,'r');
axis([-2 4 -10 10])
grid on;

subplot(2,2,2);
plot(xx,sub,'b');
axis([-2 4 -10 10])
grid on;

subplot(2,2,3);
plot(xx,mul,'g');
axis([-2 4 -10 10])
grid on;

subplot(2,2,4);
plot(xx,g,'y');
axis([-2 4 -20 20])
grid on;
