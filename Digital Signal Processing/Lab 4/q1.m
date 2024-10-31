Q1. A)

x = [1, 2, 0, -3, 4]
xx = [-2, -1, 0, 1, 2, 3, 4]
h = [0, 0, 4, 0, -5, 1, 0]
hy = [-2, -1, 0, 1, 2, 3, 4]

z_tr(x, h);

Q1. B)
pkg load symbolic
x = [1, 2, 0, -3, 4]
xx = [-2, -1, 0, 1, 2, 3, 4]
h = [0, 0, 4, 0, -5, 1, 0]
hy = [-2, -1, 0, 1, 2, 3, 4]

Xz = ztrans(sym(x));
Hz = ztrans(sym(h));

disp('Z-Transform of x:');
disp(Xz);
disp('Z-Transform of h:');
disp(Hz);



Q2.
x = [1, 2, 0, -3, 4, 0, 0];
h = [0, 0, 4, 0, -5, 1, 0];

Xz = ztrans(sym(x));
Hz = ztrans(sym(h));

n = 0:length(x_time)-1;

double x_time = real(ifft(Xz));
double h_time = real(ifft(Hz));

% Plotting
subplot(2, 1, 1);
stem(n, x_time);
xlabel('Time Index');
ylabel('Amplitude');
title('Complex Sinusoidal Signal x[n] in Time Domain');

subplot(2, 1, 2);
stem(n, h_time);
xlabel('Time Index');
ylabel('Amplitude');
title('Complex Sinusoidal Signal h[n] in Time Domain');
