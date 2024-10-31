function convolution(x, h)

    len_x = length(x);
    len_h = length(h);

    x_padded = [x, zeros(1, len_h-1)];
    h_padded = [h, zeros(1, len_x-1)];

    y = conv(x_padded, h_padded);

    subplot(3, 1, 1);
    stem(0:len_x-1, x);
    title('x(n)');
    xlabel('n');
    ylabel('Amplitude');

    subplot(3, 1, 2);
    stem(0:len_h-1, h);
    title('h(n)');
    xlabel('n');
    ylabel('Amplitude');

    subplot(3, 1, 3);
    stem(0:length(y)-1, y);
    title('Convolution of x(n) and h(n)');
    xlabel('n');
    ylabel('Amplitude');
end

x = [-8, 6, 1, 0, 4];
h = [-3, 9, 0, 1, 7];

convolution(x, h);
