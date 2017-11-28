# vim: set ft=dockerfile:

FROM alpine:latest

MAINTAINER Sebastiaan Van Hoecke

RUN apk --update add

ADD app /app

WORKDIR /app
VOLUME /app

EXPOSE 80 443

CMD ["bash"]
ENTRYPOINT [""]
