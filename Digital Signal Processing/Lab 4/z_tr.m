## Copyright (C) 2023 ASUS
##
## This program is free software: you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program.  If not, see <https://www.gnu.org/licenses/>.

## -*- texinfo -*-
## @deftypefn {} {@var{retval} =} z_tr (@var{input1}, @var{input2})
##
## @seealso{}
## @end deftypefn

## Author: ASUS <ASUS@MONDOL>
## Created: 2023-07-15

function z_tr(x, h)

    N = length(x);

    Xz = zeros(1, N);
    Hz = zeros(1, N);

    for n = 1:N
      zString = 'z^';
      zInteger = (n-3)*(-1);
      result1 = [num2str(x(n)),zString, num2str(zInteger)];
      disp(result1);
    end
    fprintf('\n');
    for n = 1:N
      zString = 'z^';
      zInteger = (n-3)*(-1);
      result2 = [num2str(h(n)),zString, num2str(zInteger)];
      disp(result2);
    end
endfunction
