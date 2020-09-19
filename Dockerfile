FROM ubuntu:bionic

RUN echo 'debconf debconf/frontend select Noninteractive' | debconf-set-selections

RUN apt-get update
RUN apt-get -y upgrade
RUN apt-get -y install curl wget dialog apt-utils libx11-6 libusb-1.0-0 libexpat1 libglu1-mesa libglib2.0-0 libfreetype6

RUN wget https://github.com/awawa-dev/HyperHDR/releases/download/v8.2.0.8A/Hyperion-8.2.0.8A-Linux-armv7l.deb
RUN apt-get install -y ./Hyperion-8.2.0.8A-Linux-armv7l.deb

RUN rm Hyperion-8.2.0.8A-Linux-armv7l.deb

EXPOSE 8090 19444 19445

RUN echo 'Running webUIon port 8090. Port 19444-19445 exposed for json, protobuffer server (hyperion-screen-cap)'

CMD ["hyperiond"]
