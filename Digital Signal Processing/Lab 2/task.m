import first.m
first(5,6);
t = 0:0.01:1;
y1 = sin(2*pi*4*t);
plot(t,y1);
y2 = cos(2*pi*4*t);
y3 = zeros(1, length(t));
plot(t,y2);
%use of hold on
figure(1);
subplot(2,2,1),plot(t,y1),grid on;
xlabel('time');
ylabel('value');
legend('sine');
title('My plots');
%plot(t,y1,'g');
hold on;
subplot(2,2,2),plot(t,y2),grid on;
xlabel('time');
ylabel('value');
legend('cosine');
title('My plots');
%plot(t,y2,'r');
hold on;
subplot(2,2,3),plot(t,y3),grid on;
xlabel('time');
ylabel('value');
legend('line');
title('My plots');
hold on;
subplot(2,2,4),plot(t,y1, t, y2, t, y3),grid on;
%plot(t,y3, 'b');
xlabel('time');
ylabel('value');
legend('sine', 'cosine', 'line');
title('My plots');
axis([-1 2 -2 2])%xmin xmax ymin ymax
grid on
print -dpng 'myplot.png'
