function snrdB = FFT_test(sampled_data)
    delta=160e-3;
    fs=1/delta;
    FFT_sampled_data=1/length(sampled_data)*fft(sampled_data,length(sampled_data));
    absFFT_sampled_data=abs(FFT_sampled_data);
    signal_value=max(absFFT_sampled_data);
    noise_mean=(sum(absFFT_sampled_data)-signal_value)/(length(sampled_data)-1);    
    snrVal=signal_value/noise_mean;
    snrdB=10*log10(snrVal);   
end