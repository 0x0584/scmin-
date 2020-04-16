// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   repl.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: archid- <archid-@student.1337.ma>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2020/04/10 08:09:28 by archid-           #+#    #+#             //
//   Updated: 2020/04/15 14:24:23 by archid-          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef REPL_H
# define REPL_H

# include "token.hpp"

sexpr_t parse(string s);
sexpr_t parse_tokens(queue<token>& q);

void repl();

#endif
