%a

% Define the time range
t = -2:0.01:2;

% Define the exponential signal
n = t;
x = exp(n);

% Plot the exponential signal using stem
stem(t, x)
title('Exponential Signal: e^n')
xlabel('Time')
ylabel('Amplitude')
grid on

%b

% Define the time range
t = -2:0.01:2;

% Define the unit ramp signal
x = t.*(t >= 0);

% Plot the unit ramp signal using stem
stem(t, x)
title('Unit Ramp Signal')
xlabel('Time')
ylabel('Amplitude')
grid on

%c

% Define the time range
t = -2:0.01:2;

% Initialize the unit sample signal
x = zeros(size(t));

% Find the index of t=0
index = find(t == 0);

% Set the unit sample value at t=0
x(index) = 1;

% Plot the unit sample signal
stem(t, x)
title('Unit Sample Signal')
xlabel('Time')
ylabel('Amplitude')
grid on

%d

% Define the time range
t = -2:0.01:2;

% Initialize the unit step signal
x = zeros(size(t));

% Find the indices where t is greater than or equal to 0
indices = find(t >= 0);

% Set the unit step value for indices >= 0
x(indices) = 1;

% Plot the unit step signal
stem(t, x)
title('Unit Step Signal')
xlabel('Time')
ylabel('Amplitude')
ylim([-0.1, 1.1]) % Set y-axis limits to clearly show the step
grid on

%e

% Define the time range
t = -2:0.01:2;

% Define the time period and phase
T = 0.125; % Time period in seconds
phase = 0; % Phase in degrees

% Calculate the angular frequency
omega = (2*pi) / T;

% Calculate the sinusoidal signal
sinusoidal_signal = sin(omega*t + deg2rad(phase));
cosinusoidal_signal = cos(omega*t + deg2rad(phase));

% Plot the sinusoidal signal
subplot(2, 1, 1)
stem(t, sinusoidal_signal)
title('Sinusoidal Signal')
xlabel('Time')
ylabel('Amplitude')
grid on

% Plot the cosinusoidal signal
subplot(2, 1, 2)
stem(t, cosinusoidal_signal)
title('Cosinusoidal Signal')
xlabel('Time')
ylabel('Amplitude')
grid on


