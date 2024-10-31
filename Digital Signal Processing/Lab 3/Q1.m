%a
%stem
x = [-8, 6, 1, 0, 4];
h = [-3, 9, 0, 1, 7];

y = x + h;

subplot(3, 1, 1);
stem(0:length(x)-1, x);
title('x(n)');
xlabel('n');
ylabel('Amplitude');

subplot(3, 1, 2);
stem(0:length(h)-1, h);
title('h(n)');
xlabel('n');
ylabel('Amplitude');

subplot(3, 1, 3);
stem(0:length(y)-1, y);
title('Addition of x(n) and h(n)');
xlabel('n');
ylabel('Amplitude');

%plot
x = [-8, 6, 1, 0, 4];
h = [-3, 9, 0, 1, 7];

y = x + h;

subplot(3, 1, 1);
plot(0:length(x)-1, x);
title('x(n)');
xlabel('n');
ylabel('Amplitude');

subplot(3, 1, 2);
plot(0:length(h)-1, h);
title('h(n)');
xlabel('n');
ylabel('Amplitude');

subplot(3, 1, 3);
plot(0:length(y)-1, y);
title('Addition of x(n) and h(n)');
xlabel('n');
ylabel('Amplitude');

%b

%stem
x = [-8, 6, 1, 0, 4];
h = [-3, 9, 0, 1, 7];

y = x - h;

subplot(3, 1, 1);
stem(0:length(x)-1, x);
title('x(n)');
xlabel('n');
ylabel('Amplitude');

subplot(3, 1, 2);
stem(0:length(h)-1, h);
title('h(n)');
xlabel('n');
ylabel('Amplitude');

subplot(3, 1, 3);
stem(0:length(y)-1, y);
title('Addition of x(n) and h(n)');
xlabel('n');
ylabel('Amplitude');

%plot
x = [-8, 6, 1, 0, 4];
h = [-3, 9, 0, 1, 7];

y = x - h;

subplot(3, 1, 1);
plot(0:length(x)-1, x);
title('x(n)');
xlabel('n');
ylabel('Amplitude');

subplot(3, 1, 2);
plot(0:length(h)-1, h);
title('h(n)');
xlabel('n');
ylabel('Amplitude');

subplot(3, 1, 3);
plot(0:length(y)-1, y);
title('Addition of x(n) and h(n)');
xlabel('n');
ylabel('Amplitude');

%c

%stem
x = [-8, 6, 1, 0, 4];
h = [-3, 9, 0, 1, 7];

y = x .* h;

subplot(3, 1, 1);
stem(0:length(x)-1, x);
title('x(n)');
xlabel('n');
ylabel('Amplitude');

subplot(3, 1, 2);
stem(0:length(h)-1, h);
title('h(n)');
xlabel('n');
ylabel('Amplitude');

subplot(3, 1, 3);
stem(0:length(y)-1, y);
title('Addition of x(n) and h(n)');
xlabel('n');
ylabel('Amplitude');

%plot
x = [-8, 6, 1, 0, 4];
h = [-3, 9, 0, 1, 7];

y = x .* h;

subplot(3, 1, 1);
plot(0:length(x)-1, x);
title('x(n)');
xlabel('n');
ylabel('Amplitude');

subplot(3, 1, 2);
plot(0:length(h)-1, h);
title('h(n)');
xlabel('n');
ylabel('Amplitude');

subplot(3, 1, 3);
plot(0:length(y)-1, y);
title('Addition of x(n) and h(n)');
xlabel('n');
ylabel('Amplitude');

%d
%stem
x = [-8, 6, 1, 0, 4];
h = [-3, 9, 0, 1, 7];

k = 1.5;
x_scaled = k * x;
h_scaled = k * h;

subplot(2, 1, 1);
stem(0:length(x)-1, x);
title('x(n)');
xlabel('n');
ylabel('Amplitude');

subplot(2, 1, 2);
stem(0:length(h)-1, h);
title('h(n)');
xlabel('n');
ylabel('Amplitude');

figure;

subplot(2, 1, 1);
stem(0:length(x_scaled)-1, x_scaled);
title(['Scaled x(n) with k = ' num2str(k)]);
xlabel('n');
ylabel('Amplitude');

subplot(2, 1, 2);
stem(0:length(h_scaled)-1, h_scaled);
title(['Scaled h(n) with k = ' num2str(k)]);
xlabel('n');
ylabel('Amplitude');

%plot

x = [-8, 6, 1, 0, 4];
h = [-3, 9, 0, 1, 7];

k = 1.5;
x_scaled = k * x;
h_scaled = k * h;

subplot(2, 1, 1);
plot(0:length(x)-1, x);
title('x(n)');
xlabel('n');
ylabel('Amplitude');

subplot(2, 1, 2);
plot(0:length(h)-1, h);
title('h(n)');
xlabel('n');
ylabel('Amplitude');

figure;

subplot(2, 1, 1);
plot(0:length(x_scaled)-1, x_scaled);
title(['Scaled x(n) with k = ' num2str(k)]);
xlabel('n');
ylabel('Amplitude');

subplot(2, 1, 2);
plot(0:length(h_scaled)-1, h_scaled);
title(['Scaled h(n) with k = ' num2str(k)]);
xlabel('n');
ylabel('Amplitude');
